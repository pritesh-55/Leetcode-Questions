/*
Name - Divide Two Integers
Dificulty - Medium
Problem number - 29
Link - https://leetcode.com/problems/divide-two-integers/
*/

class Solution {
public:
    int divide(int dividend, int divisor) {
        bool negative = (dividend > 0) ^ (divisor > 0);
        if(dividend == INT_MIN && divisor == -1) return INT_MAX;
        if(dividend > 0) dividend = -dividend;
        if(divisor > 0) divisor = -divisor; 
        int mul = divideHelper(dividend, divisor);
        return negative ? mul : -mul;
    }
    
private:
    int divideHelper(int dividend, int divisor) {
        if(dividend > divisor) return 0;
        int mul = -1;
        int sum = divisor;
        while(sum >= dividend - sum) {
            mul += mul;
            sum += sum;
            if(sum > 0) break;
        }
        return mul + divideHelper(dividend-sum, divisor);
    }
};
