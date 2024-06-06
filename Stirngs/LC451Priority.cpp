#include<iostream>
#include<algorithm>
#include<string>
#include<unordered_map>
#include<queue>
using namespace std;

class Solution{
    public:

    string freqncyString(string s){
       unordered_map<int, char> frequencyMap;
       string ans;
    //    priority_queue<>
       for(char c : s){
          auto it = frequencyMap.find(c);

          if(it != frequencyMap.end()){

          }
       }
    }
};
int main()
{
    return 0;
}