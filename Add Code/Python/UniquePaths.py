@cache
def factorial(n: int) -> int:
    ans = 1;
    for i in range(1, n + 1):
        ans *= i
    return ans
class Solution:            
    def uniquePaths(self, m: int, n: int) -> int:
        return int(factorial(m + n - 2) / ( factorial(m - 1) * factorial(n - 1) ))
