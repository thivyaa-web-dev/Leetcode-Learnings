// first make a dp array of size (1 more than the maximum value of n)
// if the value at nth index of dp array is not equal to 0 then simply return it.
// if the value of n=1 then we can clearlt say that the number of ways are 1 and if n=2 then we can clearly sat that the number of ways of climbing stairs is 2(1+1 , 2)
// then make a recursive step of dp
// the ways of climbing n staits equal to the sum of climbing (n-1) and (n-2) stairs.
// then return dp[n].

class Solution {
public:
            int dp[46]; //making dp array size of one more than given constraints

    int climbStairs(int n) {
        
        if(dp[n]!=0) return dp[n];
        
        if(n==1||n==2) return n;
        dp[n] = climbStairs(n-1)+climbStairs(n-2);
        return dp[n];
    }
};