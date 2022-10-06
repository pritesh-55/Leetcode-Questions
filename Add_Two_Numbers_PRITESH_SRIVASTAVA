/*

Format of the file -.cpp
Name - PRITESH SRIVASTAVA
Dificulty - Medium
Problem number - 2
Link - https://leetcode.com/problems/add-two-numbers/

*/

// Code

#include <cmath>
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
private:
    
    ListNode* reverse(ListNode* &middu){

    ListNode* prev = NULL;
    ListNode* curr = middu;
    while(curr!=NULL){
        ListNode* forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    return prev;
}

ListNode* insert(ListNode* &head, int d){
    ListNode* temp = new ListNode(d);
    temp->next = head;
    head = temp;
    return head;
}

ListNode* add(ListNode* l1, ListNode* l2){

    ListNode* anshead =NULL;
    int carry =0;
    while(l1!=NULL || l2!=NULL || carry!=0){
        int val1=0;
        if(l1!=NULL)
           val1 = l1->val;
        
        int val2=0;
        if(l2!=NULL)
           val2 = l2->val;

        int sum = carry + val1 + val2;
        int digit = sum%10;

        insert(anshead, digit);
        carry = sum/10;

        if(l1!=NULL)
           l1 = l1->next;
        
        if(l2!=NULL)
           l2 = l2->next;
    }
    return anshead;
}
   
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
    /*l1 = reverse(l1);
    l2 = reverse(l2);*/
    
    ListNode* ans = add(l1, l2);
     ans = reverse(ans);
    return ans;
    }
        
    
};
