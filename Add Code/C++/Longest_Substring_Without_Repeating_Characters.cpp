class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map <char,int> ans;
        int max_count = 0;
        int count = 0;
        for(int i = 0;i<s.size();i++){
            if(ans.find(s[i])!=ans.end()){
                count = 1;
                i = ans[s[i]]+1;
                ans.clear();
                ans[s[i]] = i;
            }
            else{
                count++;
                ans[s[i]]=i;
            }
            max_count = max(max_count,count);
        }
        return max_count;
    }
};
