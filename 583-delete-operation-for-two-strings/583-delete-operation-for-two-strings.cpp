class Solution {
public:
    vector<vector<int>>dp;
    int minDistance(string &word1, string &word2) {
        	dp.resize(size(word1) + 1, vector<int>(size(word2) + 1, 1000));

        return solve(word1,word2,0,0);
        
    }
    int solve(string &w1,string &w2,int i,int j){
        if(i== w1.size() && j == w2.size()) return 0;
        if(i== w1.size() || j == w2.size()) return max(w1.size()-i,w2.size()-j);
    //return the stored answer if it is already computed before 
    if(dp[i][j]!=1000) return dp[i][j];
    if(w1[i] == w2[j]) return solve(w1,w2,i+1,j+1);
    return dp[i][j] = 1+min(solve(w1,w2,i+1,j),solve(w1,w2,i,j+1));

    }
};