class Solution {
public:
    int bagOfTokensScore(vector<int>& t, int p) {
        sort(t.begin(),t.end());
        int n = t.size(), i = 0, j = n-1, ans = 0;
        if(n==0)
            return 0;
        if(t[0]>p)
            return 0;
        while(i<j)
        { 
            if(p>=t[i])
                p-=t[i++],ans++;
            else 
                p+=t[j--],ans--; 
        }
        if(p>=t[i])
                p-=t[i],ans++; 
        return ans;
        
    }
};
