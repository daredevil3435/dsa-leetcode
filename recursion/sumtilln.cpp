#include<iostream>
using namespace std;

class Solution{
public:
    int sumtillN(int n){
        if(n<0){
            return 0;
        }
        return n + sumtillN(n-1);

    }
};

int main(){
    Solution solution;

    int n;

    cin>>n;

    int ans = solution.sumtillN(n);

    cout<<ans<<endl;

    return 0;
}