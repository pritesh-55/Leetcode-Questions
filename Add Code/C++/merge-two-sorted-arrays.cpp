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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* ans;
        ListNode *ptrList1 = list1, *ptrList2 = list2;
        if(ptrList1==nullptr){
            return ptrList2;
        }
        if(ptrList2==nullptr){
            return ptrList1;
        }
        if(ptrList1->val < ptrList2->val){
            ans = ptrList1;
            ptrList1 = ptrList1->next;
        }else{
            ans = ptrList2;
            ptrList2 = ptrList2->next;
        }
        ListNode* theAnsHeadNode = ans;
        while(ptrList1 != nullptr && ptrList2 != nullptr){
            if(ptrList1->val < ptrList2->val){
                ans->next = ptrList1;
                ans = ans->next;
                ptrList1 = ptrList1->next;
            }else{
                ans->next = ptrList2;
                ans = ans->next;
                ptrList2 = ptrList2->next;
            }
        };
        // if(ptrList1->next == nullptr){
        //     ans->next = ptrList1;
        //     ans = ans->next;
        //      while(ptrList2->next != nullptr){
        //         ans->next = ptrList2;
        //         ans = ans->next;
        //         ptrList2 = ptrList2->next;
        //     }
        // }else{
        //     ans->next = ptrList2;
        //     ans = ans->next;
        //     while(ptrList1->next != nullptr){
        //         ans->next = ptrList1;
        //         ans = ans->next;
        //         ptrList1 = ptrList1->next;
        //     }
        // }
        while(ptrList1 != nullptr){
            ans->next = ptrList1;
            ans = ans->next;
            ptrList1 = ptrList1->next;
        }
        while(ptrList2 != nullptr){
            ans->next = ptrList2;
            ans = ans->next;
            ptrList2 = ptrList2->next;
        }
        return theAnsHeadNode;
    }
};
