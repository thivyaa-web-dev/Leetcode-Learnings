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
    //if you are not in either first row or column, then you need to ust take the sum of the prev row and column 
                    dp[i][j] = dp[i-1][j]+dp[i][j-1];
                
                
              }
        }
//after the entire thingy is done, you just need to return the last cell value
        return dp[m-1][n-1];
        
    }
};