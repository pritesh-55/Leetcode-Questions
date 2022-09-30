// Name - Akshay Chopade
// Difficulty - Medium
// Problem number - 3
// Problem link - https://leetcode.com/problems/longest-substring-without-repeating-characters/

class Solution {
    public int lengthOfLongestSubstring(String s) {
        int st = 0;
        int m = 0;
        int max = 0;
        HashSet<Character> hash = new HashSet<Character>();
        while(m<s.length()){
            if(!hash.contains(s.charAt(m))){
                hash.add(s.charAt(m));
                m++;
                max = Math.max(hash.size(), max);
            }else{
                hash.remove(s.charAt(st));
                st++;
            }
        }
        return max;
    }
}