#include<iostream>
#include<cmath>
using namespace std;

class Solution{
public:
  bool powerOf3(int n){
     if(n<0){
        return false;
     }
     double log_result = log(n)/log(3);

    //  cout<<log_result<<endl;
     
    //  return true;

  }
};
int main(){
    Solution solution;

    int n;
    cin>>n;


    bool ans = solution.powerOf3(n);
    return 0;
}