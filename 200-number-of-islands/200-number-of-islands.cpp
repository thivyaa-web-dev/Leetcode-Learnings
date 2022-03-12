class Solution {
public:
    void DFS(vector<vector<char>>&grid, int i,int j){
        //boundary checking 
        if(i<0||i>=grid.size()||j<0||j>=grid[0].size())
            return;
        //return if the current position is water and has been already visited
        if(grid[i][j] == '2'||grid[i][j] == '0')
        return;
        
        //mark the current as visited
        grid[i][j] ='2';
        
        //do DFS in all the directions
              DFS(grid, i+1, j);
              DFS(grid, i-1, j);
              DFS(grid, i, j+1);
              DFS(grid, i, j-1);     
    }

    int numIslands(vector<vector<char>>& grid) {
    //we can treat a matrix grid as grid.
    //each island is a connected component 
    //the task is to find the no of disconnected component in the graph 
        int islands  = 0;
        //we make each 1 as 2 when visited 
        for(int i =0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                //do dfs in case not been visited and land 
                if(grid[i][j] == '1'){
                    DFS(grid, i,j);
                    islands++;
                }
            }
        }
        return islands;
        
    }
};