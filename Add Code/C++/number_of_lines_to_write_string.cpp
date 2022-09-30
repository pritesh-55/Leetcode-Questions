class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
        
        vector<int>vec;
    unordered_map<char,int> mp;
    int count=0,lines=0,sum=0;
    for(char i='a'; i<='z';i++)
        mp[i]=widths[count++];
    
    for(int i=0;i<s.length();i++)   {
        if(sum+mp[s[i]]>100)  {
            lines++;
            sum=0;
        }
         sum+=mp[s[i]];
    }
    vec.push_back(lines+1);      
        vec.push_back(sum);
    return vec;
    }
};
