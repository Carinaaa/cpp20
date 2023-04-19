#pragma once
/*
Depth-First Search
*/
#include "Days.h"
#include <map>
#include <list>

namespace Challange{

	template<class T>
	class Day5 : public Days<T>
	{
	public:
		virtual ~Day5() {}
		Day5() {}
		T doChallange(const char* fmt, ...) override;
	private:
		friend class Graph; // interesting to see this working
		Day5(const Day5&) = delete; // not implemented copy-constructor
		const Day5& operator=(const Day5&) = delete; // not implemented copy assigment
	};

	class Graph{
	private:
		std::map<int, bool> visited;
		std::map<int, std::list<int> > adj;
	public:
		void addEdge(int v, int w); // function to add an edge to graph
		// DFS traversal of the vertices
		// reachable from v
		void DFS(int v);
	};
};