class Solution {
public:
    int uniquePaths(int m, int n) {
        //first initialize the dp table 
        int dp[m][n];
        //start iterating from all the cells of the matrix 
        for(int i =0;i<m;i++)
        {
            for(int j =0;j<n;j++)
            {
                //we are either in the first row or the first column , then we have a single unique path 
                if(i==0||j==0)
                    dp[i][j] = 1; 
                else
                    dp[i][j] = dp[i-1][j]+dp[i][j-1];
                
                
              }
        }
        return dp[m-1][n-1];
        
    }
};