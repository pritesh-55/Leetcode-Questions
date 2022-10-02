/*
Format of the file
Name - PRITESH_SRIVASTAVA
Dificulty - Easy
Problem number - 141
Link - https://leetcode.com/problems/linked-list-cycle/
*/

// Code

#include<map>
using namespace std;
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        
        ListNode* fast =head;
        ListNode* slow =head;
        
        while(slow!=NULL && fast!=NULL)
        {
            fast = fast->next;
            if(fast!=NULL)
            {
                fast= fast->next;
            }
            else return false;
            slow = slow->next;
            if(fast == slow)
            {
                return true;
            }
        }
        return false;
        
    }
};

/* map<ListNode*, bool> visited;

    ListNode* temp = head;
    while(temp!=NULL)
    {
        if(visited[temp]==true)
        {
            return true;
        }
        visited[temp]=true;
        temp = temp->next;
    }

    return false;*/
