class Solution {
public:
    //first rotate till down 
    //then swap the symetery
    void rotate(vector<vector<int>>& matrix) {
        reverse(matrix.begin(), matrix.end()); //here you are reversing 
        //iterate throughout the matrix 
        for(int i =0;i<matrix.size();i++){
            for(int j =i+1; j<matrix[i].size();j++)
                swap(matrix[i][j], matrix[j][i]);
        }
        
    }
};