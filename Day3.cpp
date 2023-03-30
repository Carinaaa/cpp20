#include "Days.h"
#include "Day3.h"


std::unordered_set<int> Challange::Day3<std::unordered_set<int>>::doChallange(const char* fmt, ...)
{
	va_list args;
	va_start(args, &fmt);
	
	std::vector<int> A = va_arg(args, std::vector<int>);
	std::vector<int> B = va_arg(args, std::vector<int>);

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

	std::unordered_set<int> D{ };
	std::unordered_set<int> E{ };
	std::unordered_set<int> F{ };
	
	for (auto i : A) {
		for (auto j : B) {
			E.insert(i);
			E.insert(j);
			if (i == j)
				D.insert(i);
		}
	}
	std::cout << std::endl << "Semantic sum: ";
	for (auto i : E)
	{
		std::cout << i << " ";
	}

	for (auto i : D) {
		E.erase(i);
	}

	va_end(args);

	return E;
}
