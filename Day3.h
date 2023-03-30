#pragma once
#include <unordered_set>


/*

Create a function that takes two or more arrays and returns an array of their symmetric difference. 
The returned array must contain only unique values (no duplicates).
*/
namespace Challange
{
	template<class T>
	class Day3 : public Days<T>
	{
	public:
		virtual ~Day3() {}
		Day3() {}
		T doChallange(const char* fmt, ...) override;

	private:
		Day3(const Day3&) = delete; // not implemented copy-constructor
		const Day3& operator=(const Day3&) = delete; // not implemented copy assigment
	};
}