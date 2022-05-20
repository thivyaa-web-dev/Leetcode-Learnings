class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
//the logic is that , if there is 1 , then there is obstacle then fill that row with 0.
//if there is no obstacle then use the logic of x=a+b. that is the sum of prev rows and cols 
        int rows = obstacleGrid.size();
        int cols = obstacleGrid[0].size();
        int dp[rows][cols];
        
//if you have seen an obstacle then all the values to the left of it will be 0
        bool flag = false;
        for(int i=0;i<cols;i++)
        {
            if(flag||obstacleGrid[0][i] == 1 )
            {
                flag = true;
                dp[0][i] =0;
            }
            else 
                dp[0][i] =1;
        }
//fill the first column
        flag = false;
        for(int i=0;i<rows;i++)
        {
            if(flag||obstacleGrid[i][0] == 1 )
            {
                flag = true;
                dp[i][0] =0;
            }
            else 
                dp[i][0] =1;
        }
        
        for(int i=1;i<rows;i++){
            for(int j=1;j<cols;j++){
                if(obstacleGrid[i][j] == 1)
                    dp[i][j] =0;
                else
                    dp[i][j] = dp[i-1][j]+dp[i][j-1];
            }
        }
        return dp[rows-1][cols-1];    
        
    }
};