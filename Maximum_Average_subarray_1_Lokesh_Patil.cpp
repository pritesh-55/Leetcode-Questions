//Name : Lokesh Patil
//Difficulty : Easy
//Problem Number : 643
//Link : https://leetcode.com/problems/maximum-average-subarray-i/



double findMaxAverage(vector<int>& nums, int k) {
        
        int n = nums.size();
        int maxSum = 0;
        
        for(int i=0; i<k; i++)
            maxSum += nums[i];
        
        int sumSoFar = maxSum;
        int j = 0;
        for(int i=k; i<n; i++)
        {
            sumSoFar = sumSoFar + nums[i] - nums[j++];
            maxSum = max(maxSum, sumSoFar);
        }
        
        return (maxSum*1.0/k);
    }