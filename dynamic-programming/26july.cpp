#include <iostream>
#include <vector>
#include <limits.h>

using namespace std;

#define INF INT_MAX // Infinity

void floydWarshall(vector<vector<int> >& graph) {
    int V = graph.size();
    vector<vector<int> > dist = graph;

    for (int k = 0; k < V; ++k) {
        for (int i = 0; i < V; ++i) {
            for (int j = 0; j < V; ++j) {
                if (dist[i][k] != INF && dist[k][j] != INF && dist[i][k] + dist[k][j] < dist[i][j]) {
                    dist[i][j] = dist[i][k] + dist[k][j];
                }
            }
        }
    }

    // Print the shortest distance matrix
    for (int i = 0; i < V; ++i) {
        for (int j = 0; j < V; ++j) {
            if (dist[i][j] == INF)
                cout << "INF ";
            else
                cout << dist[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    vector<vector<int> > graph = {
       {0,1,2},
       {0,4,8},
       {1,2,3},
       {1,4,2},
       {2,3,1},
       {3,4,1},

    };

    floydWarshall(graph);

    return 0;
}
