/*
Format of the file - .cpp
Name - PRITESH SRIVASTAVA
Dificulty - Hard
Problem number - 84
Link - https://leetcode.com/problems/largest-rectangle-in-histogram/
*/

// Code

class Solution {
private:
    vector<int> nextSE(vector<int> &arr, int n)
{
    // Write your code here.
     vector<int> v(n);
     stack<int> s;
     s.push(-1);

   for(int i=n-1; i>=0; i--)
   {
         while( (s.top() != -1) && arr[s.top()]>=arr[i])
         {
            s.pop();
         }
         v[i] = s.top();
         s.push(i);
   }
   
    return v;
}

vector<int> prevSE(vector<int> &arr, int n)
{
     vector<int> v(n);
     stack<int> s;
     s.push(-1);
     
   for(int i=0; i<= n-1; i++)
   {
         while( (s.top() != -1) && arr[s.top()]>=arr[i])
         {
            s.pop();
         }
         v[i] = s.top();
         s.push(i);
   }
   
    return v;
}
public:
    int largestRectangleArea(vector<int>& heights) {
        
         int n = heights.size();
        
        vector<int> next = nextSE(heights, n);
        vector<int> prev = prevSE(heights, n);

        int area = INT_MIN;

        for(int i=0; i<n; i++)
        {
           int l = heights[i];
           if(next[i] == -1)
           {
             next[i] = n;
           }
           int b = next[i] - prev[i] - 1;

           int newarea = l*b;
           area = max(area, newarea);
        }

        return area;
    }
};
