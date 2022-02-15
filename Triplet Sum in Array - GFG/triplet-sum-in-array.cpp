// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
    bool find3Numbers(int A[], int arr_size, int sum)
    {
        //Your Code Here
        int l,r;
        //sort the elements
        sort(A,A+arr_size);
        //fix the first element one by one and find the other two elements 
        for(int i =0;i<arr_size-2;i++)
        {
            //to find the other two other elements, start with the two index variable 
        //in the two corners of the array and move them towards each other.
        l=i+1;
        r=arr_size-1;
        
        while(l<r)
        {
            if(A[i]+A[l]+A[r] == sum){
                return true;
            }
            else if(A[i]+A[l]+A[r] <sum) 
            l++;
            else
            r--;
            
            
        }
            
        }
        
       return false; 
    }

};

// { Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,X;
		cin>>n>>X;
		int i,A[n];
		for(i=0;i<n;i++)
			cin>>A[i];
		Solution ob;
        cout <<  ob.find3Numbers(A, n, X) << endl;
    }
}
  // } Driver Code Ends