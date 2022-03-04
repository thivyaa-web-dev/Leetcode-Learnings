class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int col0 =1, rows = matrix.size(), cols = matrix[0].size();
        
        for(int i =0;i<rows;i++){
            //the value of 0th column of any of the i is zero ; in that case I set col0 as false or 0
            if(matrix[i][0] == 0) col0 =0;
            //now traversing the rest of the columns that starts from 1 
            for(int j =1; j<cols;j++)
                if(matrix[i][j] == 0)
                matrix[i][0] = matrix[0][j] =0;
        }
        //once we have done that we need to linearly traverse backwards 
        for(int i = rows-1;i>=0;i--){
            for(int j = cols-1;j>=1;j--)
                if(matrix[i][0] == 0 || matrix[0][j] == 0)
                    matrix[i][j] = 0;
            if(col0 == 0)matrix[i][0] =0;
        }
        
    }
};