// C++ program to print DFS traversal from
// a given vertex in a given graph
#include <bits/stdc++.h>
using namespace std;

map<int, bool> visited;
map<int, list<int> > adj;


// Graph class represents a directed graph
// using adjacency list representation
// class Graph {
// public:

// 	// Function to add an edge to graph
// 	void addEdge(int v, int w);

// 	// DFS traversal of the vertices
// 	// reachable from v
// 	void DFS(int v);
// };

void addEdge(int v, int w)
{
	// Add w to v’s list.
	adj[v].push_back(w);
}

void DFS(int v)
{
	// Mark the current node as visited and
	// print it
	visited[v] = true;
	cout << v << " ";

	// Recur for all the vertices adjacent
	// to this vertex
	list<int>::iterator i;
	for (i = adj[v].begin(); i != adj[v].end(); ++i)
		if (!visited[*i])
			DFS(*i);
}

// Driver code
int main()
{
	// Create a graph given in the above diagram
	addEdge(0, 1);
	addEdge(0, 2);
	addEdge(1, 2);
	addEdge(2, 0);
	addEdge(2, 3);
	addEdge(3, 3);

	cout << "Following is Depth First Traversal"
			" (starting from vertex 2) \n";

	// Function call
	DFS(2);

	return 0;
}

// improved by Vishnudev C
