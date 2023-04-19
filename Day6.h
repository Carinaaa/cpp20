#pragma once

// Kruskal Algorithm

#include "Days.h"
#include <map>
#include <list>

namespace Challange {

	template<class T>
	class Day6 : public Days<T>
	{
	public:
		Day6() {}
		virtual ~Day6() {}
		// implement Kruskal logic here
		T doChallange(const char* fmt, ...) override;


		struct Edge {};
		struct Node {};

	};

}