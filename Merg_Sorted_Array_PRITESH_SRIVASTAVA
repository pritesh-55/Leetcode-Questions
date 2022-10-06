/*
Format of the file -.cpp
Name - PRITESH SRIVASTAVA
Dificulty - Easy
Problem number - 88
Link - https://leetcode.com/problems/merge-sorted-array/
*/

// Code

 void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        //int c=0;
        vector<int> arr;
        for(int i=0; i<m; i++)
        {
            arr.push_back(nums1[i]);
        }
        for(int i=0; i<n; i++)
        {
            arr.push_back(nums2[i]);
        }
        sort(arr.begin(), arr.end());
        for(int i=0; i<m+n; i++)
        {
            nums1[i]=arr[i];
        }
        
    }
