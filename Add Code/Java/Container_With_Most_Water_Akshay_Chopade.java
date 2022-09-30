// Name - Akshay Chopade
// Difficulty - Medium
// Problem number - 11
// Problem link - https://leetcode.com/problems/container-with-most-water/

class Solution {
    public int maxArea(int[] height) {
        int l = 0;
        int r = height.length-1;
        int max = 0;
        
        while(l<r){
            int hl = height[l];
            int hr = height[r];
            int min_h = Math.min(hl, hr);
            max = Math.max(max, min_h * (r-l));
            if(hl<hr) l++;
            else r--;
        }
        
        return max;
    }
}