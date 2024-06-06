#include<iostream>
using namespace std;

class Solution {
public:
    double myPow(double x, int n) {
       if(n<0){
           return 1 / (x * myPow(x, abs(n+1)));
       }
       else{

       if (n ==0){
           return 1.0;
       }


       return x * myPow(x, n-1);
       }
    }
};

int main(){
    Solution solution;

    int x,n;

    cin>>x>>n;

    double result = solution.myPow(x,n);

    cout<<result<<endl;

    return 0;
}