class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
//we're using vector set, as it stores only the unique element

vector<set<int>> rows(9),cols(9),blocks(9);
        for(int i =0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j] == '.') {
                    continue;
                } //as we are concerned only of duplicate values
                
            
        
        int cur = board[i][j]; //checking a element, we can get this, if it is already present or not
//here the count founction returns 1, if it is present in row, col or block, otherwise it returns 0
        if(rows[i].count(cur)|| cols[j].count(cur)||blocks[(i/3)*3+j/3].count(cur)){
            return false; //false because the value is already present in the set
        }
        
        //if we dont find the value in the set , 
        rows[i].insert(cur);
        cols[j].insert(cur);
        blocks[(i/3)*3+j/3].insert(cur);

        
            }
        }
        return true;
    }
};