// AddSum.cc
#include <iostream>
extern "C" {
    int add(int a, int b) { return a + b; }
}
// 这里使用 extern "C" 关键字来导出符号，避免 C++ 的符号重整机制改变函数的名字。
// g++ -fPIC -shared AddSum.cc -o libreco.so
// 其中 -fPIC 选项代表生成位置无关代码，这是动态链接技术实现的关键，
// 然后 -shared 表示生成动态链接符号，这样其他程序可以动态加载符号并调用其中的函数