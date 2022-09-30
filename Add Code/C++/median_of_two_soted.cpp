#include <bits/stdc++.h>
using namespace std;
double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
{
    multiset<int> st;
    for (auto it : nums1)
    {
        st.insert(it);
    }
    for (auto it : nums2)
    {
        st.insert(it);
    }
    if (st.size() % 2 == 0)
    {
        int x = *next(st.begin(), st.size() / 2);
        int y = *next(st.begin(), st.size() / 2 - 1);
        //  cout<<x<<" "<<y<<endl;
        //        int y=st.find(st.begin()+(st.size()/2 -1));
        return (double)(x + y) / 2;
    }
    else
    {
        if (st.size() == 1)
        {
            return *next(st.begin(), 0);
        }
        else
        {
            int x = *next(st.begin(), st.size() / 2);
            return (double)x;
        }
    }
}
int main()
{
    int n, b;
    cin >> n >> b;
    vector<int> v1(n);
    vector<int> v2(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> v2[i];
    }
    cout << findMedianSortedArrays(v1, v2)<<endl;
    return 0;
}
