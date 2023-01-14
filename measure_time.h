#ifndef MYUTILS_MEASURE_TIME_H
#define MYUTILS_MEASURE_TIME_H


#include <iostream>
#include <chrono>
#include <string>

class MeasureTime
{
	std::chrono::steady_clock::time_point start;

public:
	void run()
	{
		start = std::chrono::steady_clock::now();
	}

	void end(const std::string& comments = "")
	{
		std::chrono::steady_clock::time_point end = std::chrono::steady_clock::now();
		long long elapsed_time = std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count();

		std::cout << "\n" << comments << "Measured ms: " << elapsed_time << std::endl;
	}

	void fps(const std::string& comments = "")
	{
		std::chrono::steady_clock::time_point end = std::chrono::steady_clock::now();
		long long measured_fps = std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count();

		std::cout << "\n" << comments << "Measured FPS: " << 1000 / measured_fps << std::endl;
	}

	void loop_fps(unsigned int iterationsNum, const std::string& comments = "")
	{
		std::chrono::steady_clock::time_point end = std::chrono::steady_clock::now();
		long long elapsed_time = std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count();
		double measured_fps = iterationsNum / (elapsed_time / 1000.0);
		std::cout << "\n" << comments << "Measured FPS: " << measured_fps << std::endl;
	}
};


#endif //MYUTILS_MEASURE_TIME_H
