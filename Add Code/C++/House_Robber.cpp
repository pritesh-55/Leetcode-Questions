// Name:- Suyog Patil
// Difficulty:- Medium
// Problem Number:- 198
// Link:- https://leetcode.com/problems/house-robber/description/
class Solution
{
    int dp[103];

public:
    int getMaxMoney(int idx, vector<int> &v)
    {
        if (idx >= v.size())
            return 0;

        int &dpAns = dp[idx];

        if (dpAns != -1)
            return dpAns;

        int rob = v[idx] + getMaxMoney(idx + 2, v);
        int dontRob = getMaxMoney(idx + 1, v);

        return dpAns = max(rob, dontRob);
    }

    int rob(vector<int> &v)
    {
        memset(dp, -1, sizeof(dp));
        return getMaxMoney(0, v);
    }
};