//Name - Nitish Kumar Maurya
//Difficulty - Medium
//Problem number - 41
//Problem Link - https://leetcode.com/problems/first-missing-positive/
class Solution {
    public int firstMissingPositive(int[] nums) {
        int k=1;
        Arrays.sort(nums);
        for(int i=0;i<nums.length;i++)
        {
            if(nums[i]>0)
            {
                if(nums[i]==k)
                {
                    k++;
                }
                else if(nums[i]!=k && nums[i]==k-1)
                {
                    continue;
                }
                else if(nums[i]!=k)
                {
                    break;
                }                
            }
        }
        return k;
    }
}