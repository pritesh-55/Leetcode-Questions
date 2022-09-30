// Name - Akshay Chopade
// Difficulty - Hard
// Problem number - 4
// Problem link - https://leetcode.com/problems/median-of-two-sorted-arrays/

class Solution {
    public double findMedianSortedArrays(int[] nums1, int[] nums2) {
    int m = nums1.length;
    int n = nums2.length;
    int[] combined = new int[m+n];
   
    int i=0, j=0, k=0;
    while(i<m && j<n){
        if(nums1[i]<nums2[j]){
            combined[k] = nums1[i];
            k++;
            i++;
        }
        else{
            combined[k] = nums2[j];
            k++;
            j++;
        }
        
    }
        while(i<m){
           combined[k++]=nums1[i++];
            
        }
        while(j<n){
          combined[k++] = nums2[j++];  
        }
        
        for(int f=0; f<m+n; f++){
            System.out.print(combined[f]+ " ");
        }
        
        if(combined.length%2!=0) return combined[(combined.length)/2];
        else return (double)(combined[combined.length/2] + combined[combined.length/2-1])/2;
    }
}