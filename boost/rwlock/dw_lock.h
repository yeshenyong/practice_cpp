/************************************************************************/
/* author: yeshenyong */
/* time  : 2022. 9.11 */
/************************************************************************/

#pragma once

#include <mutex>

#include <boost/thread/locks.hpp>
#include <boost/thread/shared_mutex.hpp>

typedef boost::shared_mutex Lock;
typedef boost::unique_lock< Lock > WriteLock;
typedef boost::shared_lock< Lock > ReadLock;

// ���ſ��Ժ������չ���Ի��ڻ��������չ
class Counter {

};

// tips: ��д��Counter
//       ����int ������POD, Ҳ����ʹ��atomic ����ԭ�Ӳ���, û��Ҫ�϶�д��
//       �˴���Ϊ����ʾ
class ThreadReadWrtieCounter {
public:
    ThreadReadWrtieCounter () = default;

    // ���߳�/����� ���Զ�counter����ͬʱ��
    unsigned int get() const;

    // ֻ��һ���߳�/һ��д�� ���Զ�value_ ���в���
    void increment();

    // ֻ��һ���߳�/һ��д�� ����reset value_
    void reset();

private:
    mutable Lock lock_;
    unsigned int value_ = 0;
};

class ThreadMutexCounter {
public:
    ThreadMutexCounter () = default;

    unsigned int get() const;

    void increment();

    void reset();

private:
    mutable std::mutex lock_;
    unsigned int value_ = 0;
};
