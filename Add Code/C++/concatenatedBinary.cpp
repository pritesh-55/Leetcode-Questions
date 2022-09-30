class Solution {
public:
    long long int mod=1e9+7;
    int concatenatedBinary(int n) {
        long long int ans=0;
        for(long long int i=1;i<=n;i++)
        {
            ans=(ans<<(long long int)(log2(i)+1))%mod;
            ans=(ans+i)%mod;
        }
        return ans;
    }
};
