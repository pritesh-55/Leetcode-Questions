//  Name - palindrome linked list-Vaishnavi Kulkarni
//  Dificulty - Easy
//  Problem number - 234
//  Link -https://leetcode.com/problems/palindrome-linked-list/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode* a=head;
        stack<int>s;
        while(a != NULL){
                s.push(a->val);
                a = a->next;
        }
         while(head != NULL ){
              
             int i=s.top();
             s.pop();
             if(head -> val != i){
                return false;
            }
           head=head->next;
        }
  
return true;
        
    }
};
