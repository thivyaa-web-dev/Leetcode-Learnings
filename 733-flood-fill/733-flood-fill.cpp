class Solution {
public:
    void FillColors(vector<vector<int>>& image, int sr, int sc, int newColor, int oldColor ,int row, int col)
    {
        if(sr<0 || sc<0 || sr>=row || sc>=col || image[sr][sc]!=oldColor)
        {
            return;
        }
        if(image[sr][sc]==oldColor) image[sr][sc] = newColor;
        FillColors(image, sr+1, sc, newColor, oldColor,row,col);
        FillColors(image, sr, sc+1, newColor, oldColor,row,col);
        FillColors(image, sr-1, sc, newColor, oldColor,row,col);
        FillColors(image, sr, sc-1, newColor, oldColor,row,col);
    }
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) 
    {
        int row = image.size();
        int col = image[0].size();
        
        if(row<=0)
        {
            return image;
        }
        int oldColor = image[sr][sc];
        if(oldColor==newColor)
        {
            return image;
        }
        FillColors(image, sr, sc, newColor, oldColor,row,col);
        return image;
    }
};