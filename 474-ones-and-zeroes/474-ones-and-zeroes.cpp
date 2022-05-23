class Solution {
public:
    pair<int,int>count(string i){
        int one =0, zero =0;
        for(auto j:i){
            if(j=='1') one++;
            else zero++;
        }
        return {zero,one};
    }
    int dp[101][101][601];
    
    int recur(vector<string>&strs,int m, int n, int i){
        if(m<0 or n<0) return -1;
        if(i>= strs.size()) return 0;
        
        pair<int,int>p = count(strs[i]);
if(dp[m][n][i]==-1) dp[m][n][i] = max(1+recur(strs,m-p.first,n-p.second,i+1),recur(strs,m,n,i+1));
        return dp[m][n][i];

    }
    
    int findMaxForm(vector<string>& strs, int m, int n) {
        memset(dp,-1,sizeof(dp));
        return recur(strs,m,n,0);
    }
};