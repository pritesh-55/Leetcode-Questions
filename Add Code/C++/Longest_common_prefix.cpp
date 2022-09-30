#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define s string

/*------------------------------------------*/
/*    Author : Sahil Shile                  */
/*    Walchand College of Engineering, Sangli*/
/*--------------------------------------------*/
string longestCommonPrefix(vector<string> &strs)
{
    int size = 201;
    string ans = "";
    if (strs.size() == 1)
        return strs[0];
    for (int i = 0; i < strs.size(); i++)
    {
        if (size > strs[i].size())
            size = strs[i].size();
        if (strs[i] == "")
            return ans;
    }
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < strs.size() - 1; j++)
        {
            if (strs[j][i] != strs[j + 1][i])
            {
                return ans;
            }
        }
        ans.push_back(strs[0][i]);
    }
    return ans;
}
int main(){
vector<string>str;
int n;
cin>>n;
for(int i=0;i<n;i++){
    cin>>str[i];
}
cout<<longestCommonPrefix(str);
return 0;
}
