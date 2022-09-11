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

// 留着看以后如果拓展可以基于基类进行扩展
class Counter {

};

// tips: 读写锁Counter
//       对于int 等这种POD, 也可以使用atomic 进行原子操作, 没必要上读写锁
//       此处仅为了演示
class ThreadReadWrtieCounter {
public:
    ThreadReadWrtieCounter () = default;

    // 多线程/多个读 可以对counter进行同时读
    unsigned int get() const;

    // 只有一个线程/一个写者 可以对value_ 进行操作
    void increment();

    // 只有一个线程/一个写者 可以reset value_
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
