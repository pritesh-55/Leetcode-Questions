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
    ListNode* oddEvenList(ListNode* head) {
        if(head) {
            ListNode* last = head;
        ListNode* curr = head;
        ListNode* prev = NULL;
        int count = 0;
        if(head) count = 1;
        while (last->next != NULL && last != NULL) {
            count++;
            last = last->next;
        }
        for(int i=1; i<=count; i++) {
            if(i%2) {
                prev = curr;
                curr = curr->next;
            }
            else {
                if(curr->next && curr) {
                    ListNode* temp = curr->next;
                    curr->next = NULL;
                    last->next = curr;
                    last = last->next;
                    prev->next = temp;
                    curr = temp;
                }
            }
        }
        }
        return head;
    }
};