#include<bits/stdc++.h>
using namespace std;

map<int,bool> visited;
map<int,list<int> > adj;

void addEdge(int u, int v){
    adj[u].push_back(v);
}

void DFS(int u){
    visited[u]=true;
    cout<<u<<" ";
    for(auto i = adj[u].begin(); i != adj[u].end();++i){
        if(!visited[*i]) DFS(*i);
    }
}


int main()
{
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