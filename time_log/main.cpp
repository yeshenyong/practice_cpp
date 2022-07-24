#include "TimeLog.h"
#include <iostream>
#include <thread>

#define CAL_SCOPE_TIME(x) ysy::timer::TimerLog t(x)
#define CAL_TIME_BEGIN(x) auto begin_##x = ysy::timer::TimerLog::Now();
#define CAL_TIME_END(x) \ 
    std::cout << "time { " << #x << " } " << ysy::timer::TimerLog::DiffMs(begin_##x, ysy::timer::TimerLog::Now()) << "ms" << std::endl;

void TestTimerLog() {
    auto func1 = []() {
        for (int i = 0; i < 5; i++)
        {
            std::cout << "i " << i << std::endl;
            std::this_thread::sleep_for(std::chrono::milliseconds(1));
        }
    };
    auto func2 = []() {
        for (int i = 0; i < 5; i++)
        {
            std::cout << "i " << i << std::endl;
            std::this_thread::sleep_for(std::chrono::milliseconds(1));
        }
    };
    auto func3 = []() {
        for (int i = 0; i < 5; i++)
        {
            std::cout << "i " << i << std::endl;
            std::this_thread::sleep_for(std::chrono::milliseconds(1));
        }
    };
    auto func4 = []() {
        for (int i = 0; i < 5; i++)
        {
            std::cout << "i " << i << std::endl;
            std::this_thread::sleep_for(std::chrono::milliseconds(1));
        }
    };
    {
        // CAL_SCOPE_TIME("func time");
        CAL_TIME_BEGIN(func123);
        func1();
        CAL_TIME_BEGIN(func234);
        func2();
        func3();
        CAL_TIME_END(func123);
        func4();
        CAL_TIME_END(func234);  

    }
}

int main()
{
    TestTimerLog();


    return 0;
}


