//this is the solution for the memoization code 

class Solution {
public:
    int dp[1000+1][1000 +1];
    int lcs(string &s1, string &s2, int n, int m) {
        if(n==0||m==0)
            return 0;
        if(dp[n][m]!=-1)
            return dp[n][m];
        if(s1[n-1] == s2[m-1])
            return dp[n][m] = 1+lcs(s1,s2,n-1,m-1);
        else
            return dp[n][m] = max(0+lcs(s1,s2,n,m-1),0+lcs(s1,s2,n-1,m));
        
        
    }
    int longestCommonSubsequence(string text1,string text2)
    {
        memset(dp,-1,sizeof(dp));
        return lcs(text1,text2,text1.length(),text2.length());
    }
};