//Name: Sort Colors
//Difficulty: Medium
//Problem number - 75
//Problem link - https://leetcode.com/problems/sort-colors/


class Solution {
public:
    void sortColors(vector<int>& nums) {
        int top = 0; 
        int bot = nums.size()-1;
        int c1 = 0;
        int c2 = 0;
        while (top<=bot) {
            if (nums[top] == 0) c1++;
            if (nums[top] == 1) c2++;            
            top++;
        }
        for (int i = 0; i <= bot; i++) {
            if (c1-->0) nums[i] = 0;
            else if(c2-->0) nums[i] = 1;
            else nums[i] = 2;
        }
        
    }
};