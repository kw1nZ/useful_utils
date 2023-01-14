#ifndef MYUTILS_MY_LOG_H
#define MYUTILS_MY_LOG_H


#include <iostream>
#include <vector>

namespace MyLog
{
	namespace
	{
		template <typename T>
		static void log_argument(T t) {
			std::cout << t;
		}

		template <typename T>
		static void log_argument_s(T t) {
			std::cout << t << " ";
		}
	}

	template <typename... Args>
	static void lgg(Args&&... args)
	{
		/*
		"HelloHelloHello"
		*/
		int dummy[] = { 0, ((void)log_argument(std::forward<Args>(args)),0)... };
	}

	template <typename... Args>
	static void lggs(Args&&... args)
	{
		/*
		"Hello Hello Hello "
		*/

		int dummy[] = { 0, ((void)log_argument_s(std::forward<Args>(args)),0)... };
	}

	template <typename... Args>
	static void lggl(Args&&... args)
	{
		/*
		"HelloHelloHello"
		""
		*/
		int dummy[] = { 0, ((void)log_argument(std::forward<Args>(args)),0)... };
		std::cout << std::endl;
	}

	template <typename... Args>
	static void lggsl(Args&&... args)
	{
		/*
		"Hello Hello Hello "
		""
		*/
		int dummy[] = { 0, ((void)log_argument_s(std::forward<Args>(args)),0)... };
		std::cout << std::endl;
	}

	static void lggn()
	{
		std::cout << std::endl;
	}
	static void lggn(size_t times)
	{
		for (size_t i = 0; i < times; i++)
		{
			std::cout << std::endl;
		}
	}

    template<typename T>
    static void lggarr(T *_elem, size_t _sz, const std::string& tag = "arr:") {
        std::cout << tag;
        for (size_t i = 0; i < _sz; i++) {
            std::cout << " " << _elem[i];
        }
        std::cout << "\n";
    }

    template<typename T>
    static void lggarr(std::vector<T> _elem, const std::string& tag = "arr:") {
        std::cout << tag;
        for (size_t i = 0; i < _elem.size(); i++) {
            std::cout << " " << _elem[i];
        }
        std::cout << "\n";
    }
}


#endif //MYUTILS_MY_LOG_H
