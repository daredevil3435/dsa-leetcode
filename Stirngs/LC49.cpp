#include<vector>
#include<string>
#include<unordered_map>
#include<algorithm>
using namespace std;

class Solution {
public:
    string sortCharacters(const std::string& input) {
   
      string sortedString = input;

    
      sort(sortedString.begin(), sortedString.end());

      return sortedString;
    }

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> anagramGroup;
        vector<vector<string>> result;

        for(string s : strs){
            string sortedString = sortCharacters(s);

            auto it = anagramGroup.find(sortedString);

            if(it != anagramGroup.end()){
                it->second.push_back(s);
            }
            else{
                anagramGroup[sortedString] = {s};
            }

        }
        for(const auto& entry : anagramGroup){
            vector<string> anagramGroup = entry.second;

            result.push_back(anagramGroup);
        }

        return result;

    }
};

int main()
{
    Solution solution;

    

    return 0;
}