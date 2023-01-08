#include <iostream>
#include <atomic>
#include <thread>
#include <unistd.h>
#include "lockless_queue.h"

using namespace std;

// g++ -std=c++11 main.cc  -o a.out -pthread

int main() {
    atomic<int> a{0};
    // test 1
    std::thread t1([&]() {
        int tmp_a = a.load(std::memory_order_relaxed);
        sleep(2);
        while(true) {
            if (a.compare_exchange_weak(tmp_a, tmp_a + 1, std::memory_order_relaxed)) {
                break;
            }
        }
    });
    std::thread t2([&]() {
        int tmp_a = a.load(std::memory_order_relaxed);
        sleep(1);
        a.compare_exchange_strong(tmp_a, tmp_a + 1, std::memory_order_relaxed);
    });
    t1.join();
    t2.join();
    cout << a << std::endl;

    // test 2
    LockLessQueue<int> queue(12);

    // capacity
    cout << "queue capacity: " << queue.capacity() << std::endl;

    // size
    cout << "queue size: " << queue.size() << std::endl;

    std::thread t3([&]() {
        for (int i = 0; i < 30; i++) {
            queue.push(i);
        }
    });

    std::thread t4([&]() {
        while(queue.size() > 0) {
            int i;
            queue.pop(i);
            cout << "queue pop: " << i << std::endl;
        }
    });
    t3.join();
    t4.join();


    return 0;
}
