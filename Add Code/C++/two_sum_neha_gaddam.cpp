#include<bits/stdc++.h>
using namespace std;
vector<int> Two_sum(vector<int>nums,int n,int b)
{
    vector<int>v;
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            int k=b-nums[i];
            if(mp[k]>0)
                return {mp[k]-1,i};
            mp[nums[i]]=i+1;
        }
        return {-1,-1};
}
int main()
{
    int n,b;
    cin>>n>>b;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    v=Two_sum(v,n,b);
    for(auto it:v)
        cout<<it<<" ";
    cout<<endl;
    return 0;
}