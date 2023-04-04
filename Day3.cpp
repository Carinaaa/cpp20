#include "Days.h"
#include "Day3.h"

//TODO: make this possible with more sets
std::vector<int> Challange::Day3<std::vector<int>>::doChallange(const char* fmt, ...)
{
	va_list args;
	va_start(args, &fmt);
	
	std::vector<int> A = va_arg(args, std::vector<int>);
	std::vector<int> B = va_arg(args, std::vector<int>); // TODO: find the &fmt until the last value
	std::vector<int> E{};

	std::cout << "A: ";
	for (auto i : A)
	{
		std::cout << i << " ";
	}

	std::cout << std::endl << "B: ";
	for (auto i : B)
	{
		std::cout << i << " ";
	}

	std::set_symmetric_difference(A.begin(), A.end(), B.begin(), B.end(),
		std::back_inserter(E));

	va_end(args);

	return E;
}
