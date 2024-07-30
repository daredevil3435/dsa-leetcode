#include<iostream>
#include<vector>
using namespace std;

class Solution{
public:

   int check(int n, vector<int>arr){
      int sum = 0;

      for(int i=0; i<n; ++i){
        sum += arr[i];
      }

      return sum*n;
   }
};

int main()
{
    Solution solution;

    vector<int>arr = {23,45};
    int n = arr.size();

    cout<<solution.check(n, arr)<<endl;

    return 0;
}