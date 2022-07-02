// { Driver Code Starts
// Initial Template for c++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
   bool ispalindrome(string str,int i,int j)
   {
       while(i<=j)
       {
           if(str[i]!=str[j])
           {
               return false;
           }
           i++;j--;
       }
       return true;
   }
   int solve(string str,int i,int j,vector<vector<int>>&dp)
   {   int Min=INT_MAX;
       if(i>=j)
       {
         return 0;  
       }
       if(ispalindrome(str,i,j)==true)
       {
           return 0;
       }
       if(dp[i][j]!=-1)
       {
           return dp[i][j];
       }
           
           
       for(int k=i;k<j;k++)
       {   int left,right;
           if(dp[i][k]!=-1)
           {
               left=dp[i][k];
           }
           else{
               left=solve(str,i,k,dp);
               dp[i][k]=left;
           }
           if(dp[k+1][j]!=-1)
           {
               right=dp[k+1][j];
           }
           else{
               right=solve(str,k+1,j,dp);
               dp[k+1][j]=right;
           }
           int tempans=1+left+right;
           Min=min(Min,tempans);
       }
       return dp[i][j]=Min;
       {
           
       }
   }
   int palindromicPartition(string str)
   {   int N=str.size();
      vector<vector<int>>dp(N+1,vector<int>(N+1,-1)); // code here
      int result=solve(str,0,N-1,dp);
      return result;
   }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        
        Solution ob;
        cout<<ob.palindromicPartition(str)<<"\n";
    }
    return 0;
}  // } Driver Code Ends