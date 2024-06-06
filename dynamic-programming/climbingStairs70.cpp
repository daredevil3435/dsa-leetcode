// vector<int> dp(n + 1);
//     dp[0] = 1;
//     dp[1] = 1;

//     for (int i = 2; i <= n; ++i)
//       dp[i] = dp[i - 1] + dp[i - 2];

//     return dp[n];
//   }
#include<iostream>
// #include<vector>
#include<bits/stdc++.h>
using namespace std;

class Solution{

public:
    int climbStairs(int n) {
        //{ Approach 1 
        // int one = 1;
        // int two = 1;

        // for(int i=0; i<n-1; i++){
        //     int temp = one;
        //     one = one + two;
        //     two = temp;
        // }

        // return one;
       //} 
       //dynamic programming approach

       vector<int> dp(n+1);

       dp[0] = 1;
       dp[1] = 1;

       for(int i=2; i<=n; ++i){
          dp[i] = dp[i-1] + dp[i-2];
       }

       return dp[n];
    }

};

int main(){
    Solution solution;

    int n;
    cin>>n;

    cout<<solution.climbStairs(n)<<endl;

    return 0;
}