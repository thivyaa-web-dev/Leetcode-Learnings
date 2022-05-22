/*  Optimised -> DP based solution
    Time Complexity  -> O(N^2)
    Space Complexity -> O(N^2) */
class Solution {
public:
    int countSubstrings(string s)
    {
        int n=s.size();
        int cnt=0;
        vector<vector<bool>> dp(n,vector<bool> (n,false));
        
        for(int gap=0;gap<n;gap++)
        {
            for(int i=0,j=gap;j<n;i++,j++)
            {
                if(gap==0)
                    dp[i][j]=true;
                
                else if(gap==1)
                {
                    if(s[i]==s[j])
                        dp[i][j]=true;
                }

                // gap > 1
                else
                {
                    if(s[i]==s[j] && dp[i+1][j-1])
                        dp[i][j]=true;
                }
                
                /* instead of writing these three if,else if AND else cases, we can simply write one                   line -
                dp[i][j]= (s[i]==s[j]) && (j-i<=1 || dp[i+1][j-1]); */
                
                if(dp[i][j])    cnt++;
            }
        }
        return cnt;
    }
};