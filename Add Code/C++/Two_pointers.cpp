class Solution {
public:
    string reverseWords(string s) {
        int n=s.size();
        int i=0,j=0;
        string ans="";
        string temp;
        s+=" ";
        while(j<=n)
        {

            if(s[j]!=' ')
            {
                temp.push_back(s[j]);
                j++;
            }
            else
            {
                reverse(temp.begin(),temp.end());
                for(int k=0;k<temp.size();k++)
                {
                    ans+=temp[k];
                    i++;
                }
                ans+=' ';
                j++;
                i=j;
                temp="";
            }
        }
        ans.pop_back();
        return ans;
    }
};
