// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    long long int dfs(int S[], int m, int n,vector<vector<long long>>&dp) {

        // code here.
        if(n==0)
        return 1;
        
        if(n<0||m<=0)
        return 0;
        
       if(dp[m][n])
       return dp[m][n];
       
       return dp[m][n] = dfs(S,m-1,n,dp)+dfs(S,m,n-S[m-1],dp);
        
    }
    
    long long int count(int S[],int m,int n){
        vector<vector<long long>>dp(m+1,vector<long long>(n+1,0));
        return dfs(S,m,n,dp);
 
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int arr[m];
        for (int i = 0; i < m; i++) cin >> arr[i];
        Solution ob;
        cout << ob.count(arr, m, n) << endl;
    }

    return 0;
}  // } Driver Code Ends