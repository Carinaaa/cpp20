#pragma once
#include <iostream>
#include <cstdint>
#include <cstdarg>

namespace Challange
{
	template<class T>
	class Days {
	public: 
	virtual ~Days() {}
	Days() {}
	virtual T doChallange(const char* fmt, ...)
	{
		std::cout << "Base class" << std::endl;
		return 0;
	}

	private:
		Days(const Days&) = delete; // not implemented copy-constructor
		const Days& operator=(const Days&) = delete; // not implemented copy assigment
	//
	};
}