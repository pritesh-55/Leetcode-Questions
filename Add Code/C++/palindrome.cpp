class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        else{
            long long int rem,sum=0,temp=x;
            while(x>0){
                rem=x%10;
                sum= (sum*10)+rem;
                x=x/10;
            }
            if(temp==sum){
                return true;
            }
            else{
                return false;
            }
        }
    }
};