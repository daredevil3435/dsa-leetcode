#include<iostream>
#include<vector>
#include<tuple>
using namespace std;

class Solution {
public:
    int numTeams(vector<int>& rating) {
       
        int n = rating.size();
        
        vector< tuple<int, int, int> > memo;

        for(int i=0; i<n-2; ++i){
            for(int j=i+1; j<n-1; ++j){
                for(int k=j+1; k<n; ++k ){
                    if((rating[i]<rating[j] && rating[j]<rating[k]) || (rating[j]<rating[i] && rating[k]<rating[j])){
                        memo.push_back(make_tuple(rating[i],rating[j],rating[k]));
                    }
                }
            }
        }

        return memo.size();
        
    }
};

int main(){

    Solution solution;

    vector<int> rating = {2,5,3,4,1};

    cout<<solution.numTeams(rating)<<endl;



    return 0;
}