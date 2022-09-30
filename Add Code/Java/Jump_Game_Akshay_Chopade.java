// Name - Akshay Chopade
// Difficulty - Medium
// Problem number - 55
// Problem link - https://leetcode.com/problems/jump-game/

class Solution {
    public boolean canJump(int[] nums) {
        int last = nums.length-1;
        for(int i=nums.length-1; i>=0; i--){
            if(i+nums[i]>=last)
                last=i;
            
        }
        return last==0;
    }
}