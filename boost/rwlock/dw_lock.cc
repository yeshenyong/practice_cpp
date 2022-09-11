/************************************************************************/
/* author: yeshenyong */
/* time  : 2022. 9.11 */
/************************************************************************/

#include <iostream>

#include "dw_lock.h"

unsigned int ThreadReadWrtieCounter::get() const {
    ReadLock rlock(lock_);
    return value_;
}

void ThreadReadWrtieCounter::increment() {
    WriteLock wlock(lock_);
    value_++;
}

void ThreadReadWrtieCounter::reset() {
    WriteLock wlock(lock_);
    value_ = 0;
}

unsigned int ThreadMutexCounter::get() const {
    std::unique_lock< std::mutex > mlock(lock_);
    return value_;
}

void ThreadMutexCounter::increment() {
    std::unique_lock< std::mutex > mlock(lock_);
    value_++;
}

void ThreadMutexCounter::reset() {
    std::unique_lock< std::mutex > mlock(lock_);
    value_ = 0;
}