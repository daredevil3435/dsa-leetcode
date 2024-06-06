#include<cmath>
#include<iostream>
using namespace std;
#include<vector>

class Solution {
public:
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        vector<int> result;
        for(int i=0; i<arr.size()-2;i++){
            int maxNum = 0;
            int prev = arr[i];
            int mid = arr[i+1];
            int last = arr[i+2];


            maxNum = max(maxNum, max(prev,mid,last));
            result.push_back(maxNum);
            
        }

        int sum = 0;
        for (int num : result) {
        sum += num;
        }

        return sum;
    }
};

int main(){
    Solution solution;

    vector<int>arr ={1,15,7,9,2,5,10};
    int k = 3;

    int ans = solution.maxSumAfterPartitioning(arr,k);

}