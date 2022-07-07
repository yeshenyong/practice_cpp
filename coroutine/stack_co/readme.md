`enviroment.h`
上面的代码定义了协程运行的环境（Environment）。

需要注意的是：

我们显式的删除了 Environment 的拷贝构造函数和赋值运算符，并且将构造函数声明为 private，仅提供工厂方法来创建 Environment 实例。

而 Environment 在实现时，使用的是 thread_local，从而保证了每个线程仅会存在单个实例。

对外暴露了 current 方法用于获取当前环境下调用栈中的协程，而三个成员变量是用来保存或记录当前调用协程的：

_c_stack；
_c_stack_top；
_main；

`environment.cc`
实现内容比较简单，主要是：

instance：工厂方法；
current：获取当前环境下栈顶的协程实例；
push/pop：协程压栈/出栈；

`status.h`
协程相关的状态主要包括了下面几类：

MAIN：仅作为协程入口调用栈的标记；
IDLE：空闲状态；
RUNNING：执行中；
EXIT：线程退出。
并重载了一些运算符。

`coroutine.h`
在 Coroutine 中定义了：

_runtime：当前线程的状态；
_context：当前协程的上下文信息（核心）；
_entry：协程函数入口；
_master：协程调用环境；


`context.cc context.h`
上面的 Context 的核心功能 switch_context 主要就是通过汇编 stack_co/switch_context.S 实现的，主要核心就是一个switch过程。

这里调用时rdi（previous）和rsi（next）分别指向Context实例的地址。首先是保存当前的寄存器上下文到 previous 的 _registers 中：

真实的rsp存放到 previous 的 104 中（13*8，可能是位于栈区的rsp，也可能是协程伪造的rsp），而返回地址放到previous的 72 中；
其余的按部就班赋值到 previous 的 _registers 中；
恢复过程则是从next的_registers中恢复：

首次启动时已经由preapre方法把必要的 ret 和函数传参rdi被写到_registers上了，因此恢复时相当于直接调用对应函数（既调用callWhenFinish(next)，里面嵌套着实际的用户回调）；
如果非首次启动，那么ret就是协程执行中的控制流；
不管怎样，在恢复时，把当前 rsp 覆盖 return address，然后使用 ret 指令执行后就能切换到对应的控制流。
具体的汇编含义在前文中已经完完整整讲述了，这里不再赘述；

而其他的方法，如：prepare、get_stack_pointer、fill_registers实际上都是为了获取当前调用栈的上下文信息；

补充：汇编扩展名的差异上文中的汇编文件命名为：switch_context.S，在Unix/Linux系统中:
.a是静态库的常用扩展(也就是用多个.o文件制作的档案ar(1))，动态库，即共享对象，使用.so；
.s用于asm编译器输出(gcc -S foo.c生成asm输出，默认文件名为foo.s)；
.S用于手写的asm源文件，并且.S适用于GNU as语法中的asm，无论是否使用任何C预处理器功能；
例如，在 glibc的源代码树中使用.S的所有ASM源文件；通常情况下：
具有gcc背景的人可能将他们的MIPS asm放入文件.S或.s文件中；
而具有更多NASM/YASM经验(或Windows)的人可能会选择.asm 扩展名；
但是建议不要使用 .s 文件，因为它很容易被覆盖：gcc -S foo.c；参考文章：汇编文件:.a .s .asm之间的差异