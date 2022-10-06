/*

Format of the file - .cpp
Name - PRITESH SRIVASTAVA
Dificulty - Easy
Problem number - 125
Link - https://leetcode.com/problems/valid-palindrome/

*/


// Code


class Solution {
private:
    char lowercase(char c)
{
    if((c>= 'a' && c<='z') || (c>=30 && c<=39) )
        return c;
    else
    {
        c = c + 32;
        return c;
    }
}
public:
    bool isPalindrome(string s) {
        string b="";
    for(int i=0; i< s.size(); i++)
    {
        if( (s[i]>= 'a' && s[i]<='z') || (s[i]>= 'A' && s[i]<='Z') || (s[i]>='0' && s[i]<='9') )
        {
            b.push_back(s[i]);
        }
    }
        
    for(int i=0; i< b.size(); i++) 
    {
        b[i]= lowercase(b[i]);
    }
        
        int i=0, j= b.size()-1;
    while(i<=j)
    {
        if( b[i]!= b[j] )
        {
            return 0;
        }
        else
        {
            i++; j--;
        }  
            
    }
    return 1;
        
    }
};
