/*
    Name - String to Integer (ATOI)
    Dificulty - Medium
    Problem number - 8
    Link - https://leetcode.com/problems/string-to-integer-atoi/
*/

class Solution {
public:
    int myAtoi(string s) {
        long long n = 0;    // Return number
        int i = 0;          // Index for traversing string
        while(i<s.size() and s[i]==' ') i++;    // Skipping initial white spaces
        int sign = 1;           // Selecting sign of return number
        if(s[i]=='-') sign=-1,i++;
        else if(s[i]=='+') i++;
        while(i<s.size() and isdigit(s[i])) {
            n = (n*10) + (int)(s[i]-'0');
            if(n>INT_MAX) break;
            i++;
        }
        if(n>INT_MAX) {
            if(sign==1) return INT_MAX;
            return INT_MIN;
        }
        return sign*n;
    }
};
