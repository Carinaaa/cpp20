#include "Days.h"
#include "Day1.h"
#include <cstdarg>

std::uint32_t Challange::Day1<uint32_t>::doChallange(const char* fmt, ...)
{
	//const uint32_t* fmt = new uint32_t;
	uint32_t sum{ 0 };
	va_list args;
	va_start(args, &fmt);
	uint32_t natural_number = va_arg(args, uint32_t);
	std::cout << "natural number = " << natural_number << std::endl;
	while (natural_number)
	{
		if ((natural_number % 3 == 0) || (natural_number % 5 == 0))
			sum += natural_number;
		natural_number--;
	}
	va_end(args);
	return sum;
}

std::uint32_t Challange::Day1<uint32_t>::Helper_Variadic_function_Challange(std::uint32_t& natural_number)
{
	Challange::Day1<uint32_t> day1;

	return day1.Challange::Day1<uint32_t>::doChallange("a", natural_number);
}