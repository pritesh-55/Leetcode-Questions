// Name : Jay_1729
// Problem Link : https://leetcode.com/problems/wiggle-subsequence/

class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp1(n, 1), dp2(n, 1);
        // dp1[i] -> length of maximum wiggle sequence ending at ith index where the next element should be smaller than num[i]
        // dp1[i] -> length of maximum wiggle sequence ending at ith index where the next element should be larger than num[i]
        dp1[0] = dp2[0] = 1;
        for(int i = 1; i < n; ++i){
            for(int j = 0; j < i; ++j){
                if(nums[i] == nums[j]){
                    continue ;
                }
                if(nums[i] > nums[j]){
                    dp2[i] = max(dp2[i], 1 + dp1[j]);
                }else{
                    dp1[i] = max(dp1[i], 1 + dp2[j]);
                }
            }
        }
        return max(dp1[n - 1], dp2[n - 1]);
    }
};
