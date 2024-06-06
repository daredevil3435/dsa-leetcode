#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class Graph
{
    int V;  //no of vertices
    vector<list <int> > adj;
public:
    Graph(int V);
    void addEdge(int v, int w);
    void BFS(int s);


};

Graph::Graph(int V)
{
    this->V = V;
    adj.resize(V);
}

void Graph::addEdge(int v, int w)
{
    adj[v].push_back(w);
}

void Graph::BFS(int s)
{
    vector<bool> visited;
    visited.resize(V,false);
}