// Name -  Remove Nth Node From End of List
// Dificulty - Medium
// Problem number - 19
// Link - https://leetcode.com/problems/remove-nth-node-from-end-of-list/

class Solution {
public:
    int length(ListNode *head){
        int len = 0;
        while(head!=NULL){
            len++;
            head = head->next;
        }
        return len;
    }
    
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int len = length(head);
        ListNode *trav = head;
        ListNode *prev;
        len -= n;
        if(len == 0){
            head = head->next;
            return head;
        }
        while(len--){
            prev = trav;
            trav = trav->next;
        }
        prev->next = trav->next;
        
        return head;
    }
};