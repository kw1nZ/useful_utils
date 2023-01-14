#ifndef MYUTILS_WHILE_TIME_H
#define MYUTILS_WHILE_TIME_H


#include <iostream>
#include <chrono>

struct WhileTime
{
	unsigned int mills;
	std::chrono::steady_clock::time_point start_time;

	WhileTime(const unsigned int mills)
		: mills{ mills }, start_time{ std::chrono::steady_clock::now() }{};

	operator bool()
	{
		long long time_diff = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::steady_clock::now() - start_time).count();
		return time_diff < mills;
	}
};


#endif //MYUTILS_WHILE_TIME_H
