/************************************************************************/
/* author: yeshenyong */
/* time  : 2022. 9.11 */
/************************************************************************/

#include <iostream>
#include <thread>
#include <vector>
#include <memory>

#include "dw_lock.h"

#define WRITE_THREAD_COUNT 8
#define LOOP_COUNT 5000000

void test_read_write() {
    ThreadReadWrtieCounter counter;

    int temp;

    auto writer = [&counter]() {
        for (int i = 0; i < LOOP_COUNT; i++) {
            counter.increment();
        }
    };

    auto reader = [&counter, &temp]() {
        for (int i = 0; i < LOOP_COUNT; i++) {
            temp = counter.get();
        }
    };

    std::vector< std::unique_ptr< std::thread > > thread_read;

    clock_t start = clock();

    for (int i = 0; i < WRITE_THREAD_COUNT; i++) {
        thread_read.emplace_back(std::move(std::unique_ptr< std::thread> (new std::thread(reader))));
    }

    std::thread thread_write(writer);

    for (int i = 0; i < WRITE_THREAD_COUNT; i++) {
        thread_read[i]->join();
    }
    thread_write.join();

    clock_t end = clock();
    printf("[test_read_write_lock]\n");
	printf("thread count:%d\n", WRITE_THREAD_COUNT);
	printf("result:%d cost:%ldus temp:%d \n", counter.get(), end - start, temp);
}

void test_mutex() {
    ThreadMutexCounter counter;

    int temp;

    auto writer = [&counter]() {
        for (int i = 0; i < LOOP_COUNT; i++) {
            counter.increment();
        }
    };

    auto reader = [&counter, &temp]() {
        for (int i = 0; i < LOOP_COUNT; i++) {
            temp = counter.get();
        }
    };

    std::vector< std::unique_ptr< std::thread > > thread_read;

    clock_t start = clock();

    for (int i = 0; i < WRITE_THREAD_COUNT; i++) {
        thread_read.emplace_back(std::move(std::unique_ptr< std::thread> (new std::thread(reader))));
    }

    std::thread thread_write(writer);

    for (int i = 0; i < WRITE_THREAD_COUNT; i++) {
        thread_read[i]->join();
    }
    thread_write.join();

    clock_t end = clock();
    printf("[test_mutex]\n");
	printf("thread count:%d\n", WRITE_THREAD_COUNT);
	printf("result:%d cost:%ldus temp:%d \n", counter.get(), end - start, temp);
}

int main() {
    test_read_write();
    test_mutex();

    return 0;
}
