// Name - Kanhaiya Bhatt
// Difficulty - Easy
// Problem number - 88
// Problem link - https://leetcode.com/problems/merge-sorted-array/

class Solution {
    public void merge(int[] nums1, int m, int[] nums2, int n) {
        int firstArray = m-1, secondArray = n-1, i = m+n-1;
       while (secondArray >= 0){
           if(firstArray >= 0 && nums1[firstArray] > nums2[secondArray]){
               nums1[i--] = nums1[firstArray--];
           }
           else {
               nums1[i--] = nums2[secondArray--];
           }
       }
    }
}
