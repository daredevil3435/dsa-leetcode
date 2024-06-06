#include<string>
#include<iostream>
#include<unordered_set>
using namespace std;

class Solution{
    public:
    string minWindow(string s, string t) {
        int lenT = t.length();
        int lenS = s.length();
        unordered_set<string> substringSet;
        string ans; 

        if(lenS<lenT){
            return "";
        }

        for (int start = 0; start < lenS; ++start) {
           bool containsAll = true;
          
           for (int length = lenT; (start + length) <= lenS; ++length) {

           string substring = s.substr(start, length);

           
            for (char c : t) {
              if (substring.find(c) == std::string::npos) {
                containsAll = false;
                break;
              }
            }
            
            if (containsAll) {
            
               substringSet.insert(substring);
            }
            
          }
        }

        for(const auto& substr : substringSet){
            cout<<substr<<endl;
        }


       


        return ans;
    }
};

int main()
{
    Solution solution;

    string s = "ADOBECODEBANC";
    string t = "ABC";

    string result = solution.minWindow(s,t);

    cout<<result<<endl;
    
    
    
    
    
    
    return 0;
}