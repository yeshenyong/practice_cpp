#ifndef COROUTINE_COROUTINE_H
#define COROUTINE_COROUTINE_H

#include "status.h"
#include "context.h"

#include <functional>
#include <memory>
namespace stack_co {

class Environment;

class Coroutine : public std::enable_shared_from_this<Coroutine> {
    friend class Environment;

    friend class Context;

public:
    static Coroutine &current();

    // ���Ե�ǰ�������Ƿ�λ��Э��������
    static bool test();

    // ��ȡ��ǰ����ʱ��Ϣ
    // Ŀǰ��֧�����С��Ƴ�����Э�̵��ж�
    Status runtime() const;

    bool exit() const;

    bool running() const;

    // ���Ĳ�����resume �� yield
    
    // usage��Coroutine::current().yield()
    static void yield();

    // Note1��������EXIT ״̬��Э�����룬�Ӷ��ٴ�resume
    //        �����ʹ���������ԣ�����exit() / running() �ж�
    // 
    // Note2������ֵ���Ե�֪resume��ִ�к������ʱ״̬
    //        �������ֵֻ�����ڼ򵥵ĳ���
    //        �������������Э�̵�����ҲӰ���˸�Э�̵�״̬
    //        ������runtime ��ȡ
    Status resume();

    Coroutine(const Coroutine &) = delete;
    Coroutine(Coroutine &&) = delete;
    Coroutine &operator=(const Coroutine &) = delete;
    Coroutine &operator=(Coroutine &&) = delete;

public:
    // ����Coroutineִ�к�����entryΪ������ڣ���Ӧ����Ϊarguments...
    // Note: ���ڿ�����Ŀ��ǣ�entryǿ��Ϊֵ����
    template<typename Entry, typename ...Args>
    Coroutine(Environment *master, Entry entry, Args ...arguments)
            : _entry([=] { entry(/*std::move*/(arguments)...); }),
              _master(master) {}

private:
    static void call_when_finish(Coroutine *coroutine);

private:
    Status _runtime{};

    Context _context{};

    std::function<void()> _entry;

    Environment *_master;
};


} // namespace stack_co

#endif //COROUTINE_COROUTINE_H