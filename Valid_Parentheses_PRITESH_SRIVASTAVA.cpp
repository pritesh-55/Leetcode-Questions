/*
Format of the file - .cpp
Name - PRITESH SRIVASTAVA
Dificulty - Easy
Problem number - 20
Link - https://leetcode.com/problems/valid-parentheses/
*/

//Code

#include <iostream> 
#include <string> 
#include <map> 
#include <stack> 
using namespace std;
class Solution {
public:
    bool isValid(string s) {
        
        map<char,char> br;
        br['('] = ')';
        br['{'] = '}';
        br['['] = ']';
        stack<char> sym;
        int n = s.size();
        int i=0;
        while(i<n)
        {
            if(s[i]=='(' || s[i]=='{' || s[i]=='[')
            {
                 sym.push(s[i]);
            }
            else
            {
                if(!sym.empty())
                {
                    if(s[i] == br[sym.top()])
                    {
                         sym.pop();
                    }
                    else return false;
                }
                else return false;
                
            }
            i++;
        }
        if(sym.empty()){
            return true;
        }
        else
           return false;
   
}
};
