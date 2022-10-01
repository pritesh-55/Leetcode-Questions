/*

Problem link:
https://leetcode.com/problems/letter-combinations-of-a-phone-number/

*/

class Solution {
private:
    void findCombinations(string digits, string output, int index, string mapping[], vector<string>& ans) {
        
        // Base case
        if (index >= digits.length()) {
            ans.push_back(output);
            return;
        }
        
        // digits[index] gives the character at particular index
        // For converting it to integer, subtract it by '0'
        int num = digits[index] - '0';
        
        // Gives letters for the given digit
        string value = mapping[num];
        
        // Iterate through each letter and add it to possible letter combination
        for(int i=0; i < value.length(); i++) {
            output.push_back(value[i]);
            // Recursive call for next index valaue
            findCombinations(digits, output, index+1, mapping, ans);
            // While backtracking, remove the letter added in the letter conmbination
            output.pop_back();
        }
    }
    
public:
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        string output = "";
        int index = 0;
        /*
        Mapping of digits to letters
        2 -> abc
        3 -> def
        .
        .
        */
        string mapping[10] = {" ", " ", "abc","def",
                              "ghi", "jkl", "mno", "pqrs",
                              "tuv", "wxyz"};
        // Corner case
        // If given string of digits is empty, return empty vector of strings
        if(digits.length() == 0)
            return ans;
        
        findCombinations(digits, output, index, mapping, ans);
        return ans;
    }
};