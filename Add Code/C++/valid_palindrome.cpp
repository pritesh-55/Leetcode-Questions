class Solution {
    
    char lower_case(char ch){
    if((ch >= 'a'&& ch <= 'z')|| (ch >= '0'&& ch <= '9')){
        return ch;
    }
    else{
        ch = ch - 'A' +'a';
        return ch;
    }
  
}
bool valid(char ch ){
    if((ch >= 'a'&& ch <= 'z')||(ch >= 'A'&& ch <= 'Z')|| (ch >= '0'&& ch <= '9')){
        return 1;
    }
    else
    {
        return 0;
    }
   
}
    
public:
    bool isPalindrome(string s) {
        int i = 0;
    int j = s.length()-1;
    while(i<=j){
         if(valid(s[i]) && !valid(s[j])){
          j--;
        }
         if(!valid(s[i]) && valid(s[j])){
            i++;
        }
         if(!valid(s[i]) && !valid(s[j])){
            i++;
            j--;
        }
        if(valid(s[i]) && valid(s[j])){
            if(lower_case(s[i]) == lower_case(s[j])){
                   i++;
                   j--;}
        else{
            return 0;
        }
            }
      
    }
    return 1;  
        
    }
};