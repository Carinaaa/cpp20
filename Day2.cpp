#include "Days.h"
#include "Day2.h"
#include <vector>

std::uint32_t Challange::Day2<uint32_t>::doChallange(const char* fmt, ...)
{
	uint32_t sum{ 0 };
	va_list args;
	va_start(args, &fmt);
	uint32_t biggest_number = va_arg(args, uint32_t);

	std::vector<int> sums{1, 1};
	uint32_t a = *sums.begin();
	uint32_t b = *(++sums.begin());
	uint32_t aux{ 0U };

	std::cout << "a: " << a << std::endl;;
	std::cout << "b: " << b;

	while (*(--sums.end()) < biggest_number) {
		if (!((a + b) % 2))
			sum += (a+b);
		sums.push_back(a+b);
		aux = a;
		a = b;
		b = aux + b;
	}
	va_end(args);
	
	return sum;
}

//std::uint32_t Challange::Day2<uint32_t>::Helper_Variadic_function_Challange(std::uint32_t& natural_number)
//{
//	Challange::Day2<uint32_t> day2;

//	return day2.Challange::Day2<uint32_t>::doChallange("a", natural_number);
//}