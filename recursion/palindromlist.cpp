/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListsNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
// #include<LinkedList>
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

struct ListNode{
    int val;
    ListNode *next;
    
};

class Solution {
public:
    bool isPalindromeHelper(ListNode*& left, ListNode* right) {
      if (right == nullptr) {
        return true;
      }
      bool isPalindrome = isPalindromeHelper(left, right->next);
      isPalindrome = isPalindrome && (left->val == right->val);

    
      left = left->next;

      return isPalindrome;
    }
    bool isPalindrome(ListNode* head) {
        // stack<int> numStack;
        // ListNode* current = head;
        // ListNode* current1 = head;

        // while(current != nullptr){
        //     numStack.push(current->val);
        //     current = current->next;
        // }

        // while(current1 != nullptr){
        //     int temp = current1->val;
        //     if(temp != numStack.top()){
        //         return false;
        //     }
        //     numStack.pop();
        //     current1 = current1->next;
        // }

        // return true;

        return isPalindromeHelper(head, head);


    }
};

int main()
{
    Solution solution;


    return 0;
}