#pragma once
#include <sys/time.h>
#include <chrono>
#include <ctime>
#include <fstream>
#include <iostream>
#include <string>

using namespace std::chrono;

namespace ysy {

namespace timer {
	
class TimerLog {
	
	public:
	TimerLog(const std::string tag) {	// 对象构造时候保存开始时间
	 	m_begin = std::chrono::high_resolution_clock::now();
		m_tag = tag;
	}
	
	void Reset() { m_begin = std::chrono::high_resolution_clock::now(); }
	
	long long Elapsed() {
		return static_cast<long long>(
			duration_cast<std::chrono::milliseconds>(high_resolution_clock::now() - m_begin).count()
		);
	}
	
	static std::chrono::time_point<std::chrono::high_resolution_clock> Now() { return std::chrono::high_resolution_clock::now(); }

	static long long DiffUs(std::chrono::time_point<std::chrono::high_resolution_clock> before,
							std::chrono::time_point<std::chrono::high_resolution_clock> after) {
		return static_cast<long long>(duration_cast<std::chrono::microseconds>(after - before).count());
	}

	static long long DiffMs(std::chrono::time_point<std::chrono::high_resolution_clock> before,
							std::chrono::time_point<std::chrono::high_resolution_clock> after) {
		return static_cast<long long>(duration_cast<std::chrono::milliseconds>(after - before).count());
	}

	~TimerLog() {	// 对象析构时候计算当前时间与对象构建时间差 
		auto time = duration_cast<std::chrono::milliseconds>(
			std::chrono::high_resolution_clock::now() - m_begin).count();
		std::cout << "time { " << m_tag << " } " << static_cast<double>(time) << "ms" << std::endl;
	}

	static long long GetCurrentMs() {
		struct timeval time;
		gettimeofday(&time, NULL);
		return static_cast<long long>(time.tv_sec * 1000) + static_cast<long long>(time.tv_usec / 1000);
	}

	static void ShowCurTime() {
		time_t now = time(0);
		char* dt = ctime(&now);
		std::cout << "cur time is " << dt << std::endl;
		std::cout << "cur ms is " << GetCurrentMs() << std::endl;
	}

	static struct timeval GetCurrentTimeofDay() {
		struct timeval time;
		gettimeofday(&time, NULL);
		return time;
	}
	
	private:
		std::chrono::time_point<std::chrono::high_resolution_clock> m_begin;
		std::string m_tag;
};
	
}	// namespace timer

}	// namespace ysy





 