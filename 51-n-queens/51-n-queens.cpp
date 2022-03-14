class Solution {
    public:
    bool isSafe(int row, int col, vector<string>board,int n){
        //keep moving upwards and check if there is a queen
        //check the upper diagnol
        int duprow = row;
        int dupcol = col;
        
        while(row>=0 && col>=0){
            if(board[row][col] == 'Q')return false;
            row--;
            col--;
        }
        col = dupcol;
        row = duprow;
        while(col>=0){
             //move left 
        if(board[row][col] == 'Q')return false;
        col--;
            
        }
       row = duprow;
       col = dupcol;
    while(row<n && col>=0){
        //column is going left when the row is increasing 
        if(board[row][col] == 'Q') return false;
        row++;
        col--;
        
    }
        return true;
        
    }
    
    
public:
    void solve(int col, vector<string>&board,vector<vector<string>>&ans,int n){
        //base case
        if(col == n){ //moment you reach the nth index, as it is over, store the ans
            ans.push_back(board);
            return;
        }
        for(int row=0;row<n;row++) //try every row
        if(isSafe(row,col,board,n)){
            board[row][col] ='Q';
            solve(col+1,board,ans,n); //once it is safe to place the queen, increase the col
            board[row][col] = '.'; //when you come back, omit the q
            
        }
    }
        
public:
    vector<vector<string>> solveNQueens(int n) {
    vector<vector<string>>ans;
    vector<string>board(n);
        string s(n,'.');
        for(int i =0;i<n;i++){
            board[i] = s;
        }
        solve(0,board,ans,n);
        return ans;
    }
};