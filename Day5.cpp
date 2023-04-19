#include "Days.h"
#include "Day5.h"

inline
void Challange::Graph::addEdge(int v, int w)
{
    adj[v].push_back(w); // Add w to v’s list.
}

inline
void Challange::Graph::DFS(int v)
{
    // Mark the current node as visited and
    // print it
    visited[v] = true;
    std::cout << v << " ";

    // Recur for all the vertices adjacent
    // to this vertex
    std::list<int>::iterator i;
    for (i = adj[v].begin(); i != adj[v].end(); ++i)
        if (!visited[*i])
            DFS(*i);
}

void Challange::Day5<void>::doChallange(const char* fmt, ...)
{
    Graph g;
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);

    std::cout << "Following is Depth First Traversal"
        " (starting from vertex 2) \n";

    // Function call
    g.DFS(2);
}

