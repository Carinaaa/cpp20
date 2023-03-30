#include "Day1.h"
#include "Day2.h"
#include "Day3.h"


int main()
{

	Challange::Day1<uint32_t> day1;
	uint32_t input{9};
	uint32_t* pi = &input;

	//std::cout << day1.doChallange("c", 9U);
	uint32_t result = day1.Helper_Variadic_function_Challange(*pi);
	std::cout << std::endl;
	std::cout << "Sum of mulptiples of 3 and 5: " << result;
	std::cout << std::endl;

	std::cout << std::endl;
	Challange::Day2<uint32_t> day2;
	uint32_t result2 = day2.doChallange("a", 34);
	std::cout << std::endl;
	std::cout << "Sum of the even numbers in fibbonacci sequence: " << result2;
	std::cout << std::endl;

	std::cout << std::endl;
	Challange::Day3<std::unordered_set<int>> day3;
	std::vector<int> A{1,2,3};
	std::vector<int> B{ 2, 3, 4 };
	std::unordered_set<int> result3 = day3.doChallange("a", A, B);
	std::cout << std::endl;
	std::cout << "Semantic difference : ";
	for (auto i : result3) {
		std::cout << i << " ";
	}
	std::cout << std::endl;


	return 0;
}