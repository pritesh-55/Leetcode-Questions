// Name - Ravi Jha
// Difficulty - Hard
// Problem number - 123
// Problem link - https://leetcode.com/problems/best-time-to-buy-and-sell-stock-iii/
class Solution {
    
    int maxprofit(int i, int j, int k, int[] prices, int [][][]dp) {
        if(i == prices.length) return 0;
        if(k == 2) return 0;
        
        if(dp[i][j][k] != -1) return dp[i][j][k];
        
        if(j == 1) return dp[i][j][k] = Math.max(maxprofit(i + 1, 0, k, prices, dp) - prices[i], maxprofit(i + 1, 1, k, prices, dp));
        return dp[i][j][k] = Math.max(maxprofit(i + 1, 1, k + 1, prices, dp) + prices[i], maxprofit(i + 1, 0, k, prices, dp));
    }
    
    public int maxProfit(int[] prices) {
        int n = prices.length;
        int [][]dp = new int[2][3];
        
        for(int i = n - 1; i >= 0; i--) {
            int [][]curr = new int[2][3];
            for(int j = 0; j <= 1; j++) {
                for(int k = 0; k < 2; k++) {
                    if(j == 1) curr[j][k] = Math.max(dp[0][k] - prices[i], dp[1][k]);
                    else curr[j][k] = Math.max(dp[1][k + 1] + prices[i], dp[0][k]); 
                }
            }
            dp = curr;
        }
        
        return dp[1][0];
        
    }
}
