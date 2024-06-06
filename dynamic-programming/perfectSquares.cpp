#include<vector>
#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;

class Solution{
    public:
    
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<int> dp(n,0);
        int maxVal;

        for(int i=0; i<prices.size()-1; ++i){
            int profit = INT_MIN;
            for(int j=i+1; j<prices.size();++j){
                profit = max(profit, prices[j]-prices[i]);
            }

            dp.push_back(profit);
        }

        auto maxProfit = max_element(dp.begin(),dp.end());

        if(maxProfit != dp.end()){
            maxVal = *maxProfit;
            
        }
        
        for(int i=0; i<dp.size();++i){
            cout<<dp[i]<<" ";
        }
        cout<<endl;

        return maxVal;
    }
};

int main(){
    Solution solution;
    
    // vector<int> prices = {7,1,5,3,6,4};
    vector<int> prices = {1,2};
    cout<<solution.maxProfit(prices)<<endl;
    return 0;
}