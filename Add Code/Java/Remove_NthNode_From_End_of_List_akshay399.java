// Name - Akshay Chopade
// Difficulty - Medium
// Problem number - 19
// Problem link - https://leetcode.com/problems/remove-nth-node-from-end-of-list/

class Solution {
    public ListNode removeNthFromEnd(ListNode head, int n) {
       
        if(head == null) return null;
        ListNode dummy = new ListNode(0);
        dummy.next = head;
        ListNode slow = dummy;
        ListNode fast = dummy;
        for(int i =0; i<n; i++){
            fast = fast.next;
        }
        
        while(fast.next!=null){
            slow = slow.next;
            fast = fast.next;
        }
        // if(slow.next == null)
        slow.next = slow.next.next;
        
        return dummy.next;
    }
}
