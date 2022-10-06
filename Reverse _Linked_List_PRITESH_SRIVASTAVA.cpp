/*

Format of the file -.cpp
Name - PRITESH SRIVASTAVA
Dificulty - Easy
Problem number - 206
Link - https://leetcode.com/problems/reverse-linked-list/

*/

// Code


 ListNode* reverseList(ListNode* &head) 
 {
        ListNode *prev = NULL;
        ListNode *curr = head;
        while (curr!=NULL)
      {
        ListNode *forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;

      }
      return prev;
        
 }
