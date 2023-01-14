#ifndef MYUTILS_WHILE_RANGE_H
#define MYUTILS_WHILE_RANGE_H


class Range {
	/*
	Range like in Kotlin
	Range(start, end)
	Range(end) = Range(0, end)

	Example:
	Range range(2, -2);
	while (range) 
	{
		std::cout << range.i << ") " << range.it << std::endl;
	}

	Console:
	0) 2
	1) 1
	2) 0
	3) -1
	4) -2
	*/

public:
	int i = -1;
	int it, start, end;

private:
	void init(int start, int end)
	{
		this->start = start;
		this->end = end;
		this->it = start < end ? start - 1 : start + 1;
	}

public:
	Range(int start, int end) 
	{
		init(start, end);
	}

	Range(int end)
	{ 
		end = end > 0 ? end - 1 : end + 1;
		init(0, end);
	}

	operator bool() 
	{
		i++;
		return start < end ? ++it <= end : --it >= end;
	}
};


#endif //MYUTILS_WHILE_RANGE_H
