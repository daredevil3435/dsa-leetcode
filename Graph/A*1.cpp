#include<bits/stdc++.h>
#include<vector>
using namespace std;
#define n 3
using i64 = long long int;
const bool SUCCESS = true;

class state
{
    public:
    int board[n][n], g,f;
    state* came_from;
    state()
    {
        g=0;
        h=0;
        came_from= NULL;
    }

    static int heuristic (state from, state to){
        int ret = 0;
        for(int i=0; i<n; i++){
            for(int j=0; i<n; j++){
                if(from.board[i][j]!= to.board[i][j]){
                    ret++;
                }
            }
        }
        return ret;
    }

    bool operator == (state a){
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(this->board[i][j]!=a.board[i][j]){
                    return false;
                }
            }
        }
        return true;
    }

    void print()
    {
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<board[i][j]<<" ";

            }
            cout<<endl;
        }
            cout<<"g = "<<g<<"| f = "<<f<<endl;
    }
};

vector <state> output;
bool lowerF(state a, state b){
    return a.f<b.f;
}

bool isinset(state a, vector<state> b){
    for(int i=0;i<n;i++){
        
            if(a==b[i]){
                return true;
            }
        
    }
    return false;
}
void addNeighbor(state current, state goal, int newj)