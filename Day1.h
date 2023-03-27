#pragma once
#include "Days.h"

/*
If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9.
The sum of these multiples is 23.
Find the sum of all the multiples of 3 or 5 below the provided parameter value number

*/

namespace Challange
{
	template<class T>
	class Day1 : public Days<T>
	{
	public:
		virtual ~Day1() {}
		Day1() {}
		std::uint32_t Helper_Variadic_function_Challange(std::uint32_t &natural_number);
		T doChallange(const char* fmt,...) override;
	private:
		Day1(const Day1&) = delete; // not implemented copy-constructor
		const Day1& operator=(const Day1&) = delete; // not implemented copy assigment
	};
}