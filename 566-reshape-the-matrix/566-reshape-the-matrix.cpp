class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        //declare the ans matrix
        vector<vector<int>>ans(r,vector<int>(c));
        if(mat.size()*mat[0].size()!=r*c) return mat; //if sizes of matrix are not equal
        int row =0; //start with the first element
        int col =0;
        
        for(int i =0;i<mat.size();i++) //loop the first matrix
        {
            for(int j=0;j<mat[0].size();j++){
                ans[row][col] = mat[i][j]; //transfer the element from the first to second matrix
                col++; //we can keep doing this till we reach the end of the col
                if(col ==c){ //once the column has reached the end of the new matrix
                    row++;   //increase the row
                    col =0; //initialize the col back to zero, as we need to start from the first
                }
                
            }
        }
        
      return ans;  
    }
};