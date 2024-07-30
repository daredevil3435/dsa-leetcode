#include<vector>
#include<iostream>
#include<queue>
using namespace std;

int main(){

    priority_queue<int, vector<int>, greater<int> > pq;

    pq.push(12);
    pq.push(2);
    pq.push(91);

    cout<<"Elements in Min-Heap Priority Queue: ";
    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }
    cout<<endl;






    return 0;
}