class Solution {
    
    int lengthOfLis(int i, int prev, int[] nums, int [][]dp) {
        if(i == nums.length) return 0;
        
        if(dp[i][prev + 1] != -1) return dp[i][prev + 1];
        
        
        int take = 0;
        
        if(prev == -1 || nums[i] > nums[prev]) {
            take = 1 + lengthOfLis(i + 1, i, nums, dp);
        }
        
        int nottake = lengthOfLis(i + 1, prev, nums, dp);
        
        return dp[i][prev + 1] = Math.max(take, nottake);
    }
    
    public int lengthOfLIS(int[] nums) {
        
        int n = nums.length;
        
        int [][]dp = new int[n][n];
        
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) dp[i][j] = -1;
        }
        
        return lengthOfLis(0, -1, nums, dp);
    }
}
