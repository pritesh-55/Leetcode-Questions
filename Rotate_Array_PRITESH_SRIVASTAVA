/*
Format of the file -.cpp
Name - PRITESH SRIVASTAVA
Dificulty - Medium
Problem number - 189
Link - https://leetcode.com/problems/rotate-array/
*/

// Code

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        int n= nums.size();
        vector<int> arr(n);
        for(int i=0; i<n; i++)
        {
            arr[(i+k)%n] = nums[i];
        }
        nums=arr;      
    }
};
