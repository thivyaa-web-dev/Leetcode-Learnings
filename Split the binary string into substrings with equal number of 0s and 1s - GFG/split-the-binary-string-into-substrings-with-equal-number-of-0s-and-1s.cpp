// { Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
    int maxSubStr(string str){
        //Write your code here
        int n=str.size();
        int c=0,c0=0,c1=0;
        for(int i=0;i<n;i++){
                 if(str[i]=='0')
                     c0++;
                else
                c1++;
                
                if(c1==c0)
                    c++;
                
        }
        if(c0!=c1)
          return -1;
        
        return c;
    }
};


// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    string str;
	    cin >> str;
	    Solution ob;
	    int ans = ob.maxSubStr(str);
	    cout << ans<<endl;
	}
	return 0;
}
  // } Driver Code Ends