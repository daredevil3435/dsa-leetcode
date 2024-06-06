//Approach - use hash table to store frequency of characters in string. 
// then declare string and start adding chcaracter as per frequency
 
// this ans is using vector xs

#include<iostream>
#include<unordered_map>
#include<string>
#include<algorithm>
#include<queue>
#include<vector>
#include <c++/v1/numeric>
// #include<priority_queue>
using namespace std;

class Solution
{
    public:
    
    string frequencySort(string s){
        unordered_map<char, int> frequencyMap;
        vector<char> stringVector;
        string ans;
        for(char c : s){
            auto it = frequencyMap.find(c);
            
            if(it != frequencyMap.end()){
                frequencyMap[c] += 1;
            }
            
            else{
                frequencyMap[c] = 1;
            }
        }
        
        for(const auto& entry : frequencyMap){
            cout<<"Char "<<entry.first<<" Frequency "<<entry.second<<endl;
        }
        
        vector<std::pair<char, int>> frequencyVector(frequencyMap.begin(), frequencyMap.end());

        // Sort the vector based on the second element of each pair (frequency) in decreasing order
        sort(frequencyVector.begin(), frequencyVector.end(), [](const auto& a, const auto& b) {
              return a.second > b.second;
        });

        // Display the sorted vector
        for (const auto& pair : frequencyVector) {
             std::cout << pair.first << ": " << pair.second << std::endl;
        }
        
        for(const auto& entry: frequencyVector){
            for(int i = 0; i< entry.second; i++){
                stringVector.push_back(entry.first);
            }
        }
        
        for(int i=0; i<stringVector.size(); ++i){
            cout<<stringVector[i]<<" ";
        }
        cout<<endl;
        
        ans = accumulate(stringVector.begin(), stringVector.end(), string());
        
        return ans;
        
    }
    
};
int main(){
    Solution solution;
    
    string s = "leetcode";
    
    cout<<solution.frequencySort(s)<<endl;
    return 0;
}