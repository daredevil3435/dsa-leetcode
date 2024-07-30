#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution{
    
public:
    int countPresorted(int n, vector<int>arr){
        vector<int> copy(arr.begin(), arr.end() );
        int count = 0;
        sort(arr.begin(),arr.end());
        
        for(int i=0; i<n; ++i){
            if(copy[i]==arr[i]){
                count += 1;
            }
        }
        
        return count;
    }
    
};
int main(){
    
    Solution solution;
    
    vector<int> arr = {1,3,2,4,5};
    
    int n = arr.size();
    
    cout<<solution.countPresorted(n, arr)<<endl;
    
    return 0;
}