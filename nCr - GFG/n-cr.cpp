// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int mod = 1000000007;

    int solve(int n, int r,vector<vector<int>>&dp){
        if(r<0){
            return 0;
        }
        if(dp[n][r]!=-1){
            return dp[n][r];
        }
        if(r==0){
            return dp[n][r] =1;
        }
        if(n==0){
            return dp[n][r] =0;
        }
        
        int x = solve(n-1,r-1,dp)%mod;
        int y = solve(n-1,r,dp)%mod;
        return dp[n][r] = (x+y)%mod;
        
    }
    
    int nCr(int n, int r){
        vector<vector<int>> dp(n+1,vector<int>(r+1,-1));
        return solve(n,r,dp);
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, r;
        cin>>n>>r;
        
        Solution ob;
        cout<<ob.nCr(n, r)<<endl;
    }
    return 0;
}  // } Driver Code Ends