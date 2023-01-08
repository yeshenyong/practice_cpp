/**
 * author: yeshenyong.ysy
 * time: 2023年1月8日14:17:23
*/

/**
 * 无锁队列 (简单版): 环形数组实现(针对多消费者多生产者, 线程安全)
 * 使用风险
 * 1. push 会通过复制构造函数重新 new 构造指针对象
 *    a. 有一定的构造额外损耗
 *    b. 容器对象没有删除或者私有化复制构造函数
 * 2. pop 会将push 创建的对象返回, 并delete 对应对象
 * 3. size_t head、tail 会无休止的递增, 但是不影响使用, 除非它溢出了unsigned long int 长度
*/

/**
 * 待优化/改进点
 * 1. unlikely 判断
 * 2. 数据预取
 * 3. head tail 字段重新设计
 * 4. 频繁的push/pop 构造和析构优化
 * 5. 对于溢出capacity 没有resize 机制 (只会拒绝push)
*/

#ifndef LOCKLESS_QUEUE_H
#define LOCKLESS_QUEUE_H

#include <atomic>

template<class T>
class LockLessQueue {
public:
    explicit LockLessQueue(size_t capacity) {
        capacityMask_ = capacity - 1;
        for (size_t i = 1; i <= sizeof(void *) * 4; i <<= 1) {
            capacityMask_ |= capacityMask_ >> i;
        }
        capacity_ = capacityMask_ + 1;

        queue_ = new Node[capacity_];
        for (size_t i = 0; i < capacity_; ++i) {
            queue_[i].tail.store(i, std::memory_order_relaxed);
            queue_[i].head.store(-1, std::memory_order_relaxed);
        }

        tail_.store(0, std::memory_order_relaxed);
        head_.store(0, std::memory_order_relaxed);
    }

    ~LockLessQueue() {
        for (size_t i = head_; i != tail_; ++i) {
            (&queue_[i & capacityMask_].data)->~T();
        }
        delete []queue_;
    }

    size_t capacity() const {
        return capacity_;
    }

    size_t size() const {
        size_t head = head_.load(std::memory_order_acquire);
        return tail_.load(std::memory_order_acquire) - head;
    }

    bool push(const T& data) {
        Node* node;
        size_t tail = tail_.load(std::memory_order_relaxed);
        for(;;) {
            node = &queue_[tail & capacityMask_];
            if (node->tail.load(std::memory_order_relaxed) != tail) {
                return false;
            }
            if ((tail_.compare_exchange_weak(tail, tail + 1, std::memory_order_relaxed))) {
                break;
            }
        }
        new (&node->data)T(data);
        node->head.store(tail, std::memory_order_release);
        return true;
    }

    bool pop(T& data) {
        Node* node;
        size_t head = head_.load(std::memory_order_relaxed);
        for(;;) {
            node = &queue_[head & capacityMask_];
            if (node->head.load(std::memory_order_relaxed) != head) {
                return false;
            }
            if (head_.compare_exchange_weak(head, head + 1, std::memory_order_relaxed)) {
                break;
            }
        }
        data = node->data;
        (&node->data)->~T();
        node->tail.store(head + capacity_, std::memory_order_release);
        return true;
    }

private:
    struct Node {
        T data;
        std::atomic<size_t> tail;
        std::atomic<size_t> head;
    };

private:
    size_t capacityMask_;
    size_t capacity_;
    std::atomic<size_t> tail_;
    std::atomic<size_t> head_;
    Node* queue_;
};


#endif // LOCKLESS_QUEUE_H