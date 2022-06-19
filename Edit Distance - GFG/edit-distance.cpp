// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    int editDistance(string s, string t) {
        // Code here
         int m = s.length(), n = t.length();
        vector<vector<int>> memo(m+1, vector<int>(n+1, -1));
        return editDistance(s, t, m, n, memo);
    }
    
    int editDistance(string& s, string& t, int m, int n, vector<vector<int>>& memo){
        if(m == 0) return memo[m][n] = n;
        if(n == 0) return memo[m][n] = m;
        
        if(memo[m][n] != -1)
            return memo[m][n];
//if both the characters are same, all you have to do is to get their diagnol values 
        
        if(s[m-1] == t[n-1]) 
            return memo[m][n] = editDistance(s,t, m-1, n-1, memo);
//if they are different , then you get the min of the three +1 
//you get the min of left, top or diagnol +1
        else{
            int insertChar = editDistance(s, t, m, n-1, memo);
            int deleteChar = editDistance(s, t, m-1, n, memo);
            int replaceChar = editDistance(s, t, m-1, n-1, memo);
            
            return memo[m][n] = 1 + min({insertChar, deleteChar, replaceChar});
        }
    }
};

// { Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        string s, t;
        cin >> s >> t;
        Solution ob;
        int ans = ob.editDistance(s, t);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends