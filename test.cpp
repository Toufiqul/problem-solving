#include<bits/stdc++.h>
using namespace std;

int graph[100][100];
int n;

bool DFS(int node, bool *visited, bool *inloop, int &prev){

    visited[node] = true;
    inloop[node] = true;

    for(int i =0; i < 100; i++){
        if(graph[node][i]){
            if(!visited[i]){
                if(DFS(i,visited,inloop,prev)){
                    if(i==prev)
                    cout<<i<<" ", prev = -1;
                    else if(prev != -1)
                    cout<<i<<" ";

                    return true;
                }
            }
            else if(inloop[i]){
                prev=i;
                return true;
            }
        }

    }
    inloop[node] = false;
    return false;
}

bool checkCycle(bool *visited){
    int prev = -1;
    bool inloop[n]={false};

    for(int i=0;i<n;i++){
        if(!visited[i] && DFS(i,visited,inloop,prev)){
            return true;
        }
    }
    return false;
}



int main()
{

    return 0;
}