#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

class Solution{
    public:
       int difference(vector<int>& nums){
         int sum1=0;
         int sum2=0;

         for(int i=0; i<nums.size();i++){
             sum1= sum1+ nums[i];

             while(nums[i]>0){
                int digit = nums[i]%10;
                sum2+=digit;

                nums[i]/=10;

             }
         }
         int result = abs(sum1-sum2);
         return result;
       }

};

int main(){

    Solution solution;
    
    vector<int> nums={13,26,3,4,5};
    
    int difference = solution.difference(nums);

    cout<<difference<<endl;

    return 0;
}