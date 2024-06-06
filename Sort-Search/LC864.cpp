
// Alice has some number of cards and she wants to rearrange the cards into groups so that each group is of size groupSize, and consists of groupSize consecutive cards.

// Given an integer array hand where hand[i] is the value written on the ith card and an integer groupSize, return true if she can rearrange the cards, or false otherwise.
#include<unordered_map>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        int n = hand.size();

        unordered_map<int, int>hand_count;
        
        sort(hand.begin(),hand.end());

        for(int i : hand){
            hand_count[i]++;
        }

        for(int card : hand){
            if(hand_count.count(card)){
                for(int nextCard = card; nextCard < card + groupSize; ++nextCard){
                    if(!hand_count.count(nextCard)){
                        return false;
                    }

                    if(--hand_count[nextCard]== 0){
                        hand_count.erase(nextCard);
                    }
                }
            }
        }

        return true;

        
    }
};

