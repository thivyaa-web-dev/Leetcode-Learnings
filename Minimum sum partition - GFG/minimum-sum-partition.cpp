// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{

  public:
	int minDifference(int arr[], int n)  { 
	    // Your code goes here
	    
	    //first we need to calculate the sum of two elements
	    int sum =0;
	    for(int i=0;i<n;i++)
	    sum+=arr[i];
	    
	    //create an array to store the results of the subproblems 
	    bool dp[n+1][sum+1];
	    
	    //Initializing the first column as true 
	    for(int i=0;i<=n;i++)
	    dp[i][0] =true;
	    
	    //Initialize the top row except dp[0][0] as false
	    for(int i=1;i<=sum;i++)
	    dp[0][i] = false;
	    
	    //Filling the partition table in the bottom up manner 
	    for(int i=1;i<=n;i++){
	        for(int j=1;j<=sum;j++){
	        
	        //if the ith element is excluded 
	        dp[i][j] = dp[i-1][j];
	        
	        //if ith element is included 
	        if(arr[i-1]<= j)
	        dp[i][j] |= dp[i-1][j-arr[i-1]];
	    }
	    }
	    
	 
	
	 int diff = INT_MAX;
 
    // Find the largest j such that dp[n][j]
    // is true where j loops from sum/2 t0 0
    for (int j = sum / 2; j >= 0; j--) {
        // Find the
        if (dp[n][j] == true) {
            diff = sum - 2 * j;
            break;
        }
    }
    return diff;
	
	//Intialize the difference of two sums 
	}

	
	
	
};


// { Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.minDifference(a, n) << "\n";
	     
    }
    return 0;
}  // } Driver Code Ends