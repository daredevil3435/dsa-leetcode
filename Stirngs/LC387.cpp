#include<iostream>
#include<queue>
#include<unordered_map>
using namespace std;
//how about adding all characters of string in queue one by one then comparing the Frequncy of the front with unordered_map if equal to 1 then return queue.front()
// class Solution {
// public:
//     int firstUniqChar(string s) {
//         queue<char> charQ;
//         unordered_map<char, int> charMap;

//         for(char c: s){
//             charMap[c]++;

//             // while(charMap[c]>1){
//             //     char frontChar = charQ.front();
//             //     charQ.pop();
//             //     charMap[frontChar]--;
//             // }

//             // charQ.push(c);
//         }
        
//          for(const auto& pair : charMap){
//             cout<<"Character "<<pair.first<<" Frequncy "<<pair.second<<endl;
//         }
//         cout<<endl;

//         for(const auto& pair : charMap){
//             if(pair.second == 1){
//                 charQ.push(pair.first);
//             }
//         }
//         cout<<"Queue - "<<endl;
//         while(!charQ.empty()){
//             cout<<charQ.front()<<" - ";
//             charQ.pop();
//         }

//         // while(!charQ.empty()){
//         //     cout<<charQ.front();
//         //     return charQ.front();
//         // }

//         return -1;
//     }
// };

class Solution{
public:
  int firstUniqChar(string s){
      queue<char> charQ;
      unordered_map<char, int> charMap;
      int index;
      for(char c : s){
          charQ.push(c);
          charMap[c]++;
      }
      
      while(!charQ.empty()){
          char frontChar = charQ.front();
          
          auto it = charMap.find(frontChar);
          
          if(it != charMap.end()){
              int count = it->second;
              if(count == 1){
                index = s.find(it->first); 
                // cout<<index<<endl;
              }
                  
            }
            
            // return index;
          }
          
          
          
          
          
         return -1;
      }
      
    //   while(!charQ.empty()){
    //       cout<<charQ.front()<<" - ";
    //       charQ.pop();
    //   }
      
    //   for(const auto& pair: charMap){
    //       cout<<"Character "<<pair.first<<" Freq "<<pair.second<<endl;
    //   }
   
};
int main(){
    Solution solution;
    
    // string s = "leetcode";
    string s = "loveleetcode";
    // string s = "aabb";
    
    int ans = solution.firstUniqChar(s);
    
    cout<<ans<<endl;
}

