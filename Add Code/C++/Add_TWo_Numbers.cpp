#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define s string

/*------------------------------------------*/
/*    Author : Sahil Shile                  */
/*    Walchand College of Engineering, Sangli*/
/*--------------------------------------------*/
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

void reverse(ListNode *&head)
{
    ListNode *curr = head;
    ListNode *prev = NULL;
    while (curr != NULL)
    {
        ListNode *forw = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forw;
    }
    head = prev;
}

void insertAtHead(ListNode* &head,int x){
    ListNode* temp=head;
    ListNode* newNode=new ListNode(x);
    if(head!=NULL){
    newNode->next=head;
    head=temp;
    }
    else{
        head=newNode;
    }
}
ListNode *solve(ListNode *&head1, ListNode *&head2)
{
    ListNode *temp1 = head1;
    ListNode *temp2 = head2;
    ListNode *ans = new ListNode(0);
    ListNode *ansHead = ans;
    int carry = 0;
    int sum;
    while (temp1 != NULL || temp2 != NULL)
    {
        if (temp1 != NULL && temp2 != NULL)
        {
            sum = temp1->val + temp2->val + carry;
        }
        else if (temp1 == NULL && temp2 != NULL)
        {
            sum = temp2->val + carry;
        }
        else if (temp1 != NULL && temp2 == NULL)
        {
            sum = temp1->val + carry;
        }
        if (sum == 10)
        {
            carry = 1;
            sum = 0;
        }
        else if (sum > 10)
        {
            carry = sum / 10;
            sum = sum % 10;
        }
        else
        {
            carry = 0;
        }
        // cout<<sum<<" "<<carry<<endl;
        ListNode *newNode = new ListNode(sum);
        ansHead->next = newNode;
        ansHead = newNode;
        if (temp1 != NULL)
            temp1 = temp1->next;
        if (temp2 != NULL)
            temp2 = temp2->next;
    }
    if (carry != 0)
    {
        ListNode *newNode = new ListNode(carry);
        ansHead->next = newNode;
        ansHead = newNode;
    }
    ListNode *finale = ans->next;
    reverse(finale);
    return finale;
}
ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
{
    ListNode *head1 = l1;
    ListNode *head2 = l2;
    reverse(head1);
    reverse(head2);
    return solve(head1, head2);
}
int main(){
ListNode* node1=new ListNode(10);
ListNode* temp1=node1;
insertAtHead(temp1,11);
insertAtHead(temp1,12);
insertAtHead(temp1,13);
ListNode* node2=new ListNode(14);
ListNode* temp2=node1;
insertAtHead(temp1,15);
insertAtHead(temp1,16);
insertAtHead(temp1,17);
ListNode* ansHead=addTwoNumbers(node1,node2);

return 0;
}
