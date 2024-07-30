#include<iostream>
#include<queue>
#include<vector>
using namespace std;

class Solution{
    public:

    void findRelativeRanks(vector<int>& score){
        priority_queue<int, int> pq;
        for(int i=0; i<score.size(); ++i){
            pq.push(score[i],i);



        }

        while(!pq.empty()){
            cout<<pq.top()<<" ";
            pq.pop();
        }
        cout<<endl;

    }
};
int main()
{
    Solution solution;

    vector<int> score = {10,3,8,9,4};

    solution.findRelativeRanks(score);
    
    return 0;
}