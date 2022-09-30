// Name - Umesh Bagade
// Difficulty - medium
// Problem Link -https://leetcode.com/problems/bag-of-tokens/
class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        
        
        sort(tokens.begin(),tokens.end());
        int maxscr=0,currscr=0;
        long long sum=power;
        int n = tokens.size();
        int i=0,j=n-1;
        
        while(i<=j)
        {
            if(tokens[i] <= sum)
            {
                sum -= tokens[i];
                currscr++;
                i++;
            }
            else{
                sum += tokens[j];
                currscr--;
                if(currscr<0) break;
                j--;
                
            }
            
            
            
            maxscr = max(maxscr , currscr);
        }
        
        
        return maxscr;
    }
    
};
