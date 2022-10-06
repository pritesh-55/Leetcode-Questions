/*
Format of the file - .cpp
Name - PRITESH SRIVASTAVA
Dificulty - Medium
Problem number - 34
Link - https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/

*/

// Code

class Solution {
private: int first(vector<int>& nums, int target){
    int s=0, e=nums.size()-1;
    int ans=-1;
    while(s<=e)
    {
        int mid= s+ (e-s)/2;
        if(nums[mid]==target)
        {
            ans=mid;
            e=mid-1;
        }
        else if(target>nums[mid])
          s=mid+1;
        else
            e=mid-1;
    }
    return ans;
}
private: int last(vector<int>& nums, int target){
    int s=0, e=nums.size()-1;
    int ans=-1;
    while(s<=e)
    {
        int mid= s+ (e-s)/2;
        if(nums[mid]==target)
        {
            ans=mid;
            s=mid+1;
        }
        else if(target>nums[mid])
          s=mid+1;
        else
            e=mid-1;
    }
    return ans;
}
public:
    vector<int> searchRange(vector<int>& nums, int target) {
         
        vector<int> p;
        p.push_back(first(nums,target));
        p.push_back(last(nums,target));
        
       return p;
        
    }
};
