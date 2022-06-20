// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int binarysearch(int arr[], int n, int k) {
        // code here
    //having a lower index at position 0, and higher index at n-1
        int low =0, high = n-1;
        int mid = (low+high)/2;
        while(low<=high){
            if(arr[mid] == k){
                return mid;
            }
            if(arr[mid]<k){
                low = mid+1;
            }
            
        else{
            high = mid-1;
        }
        mid = low + (high-low)/2;
    }
    return -1;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;

    while (t--) {
        int N;
        cin >> N;
        int arr[N];
        for (int i = 0; i < N; i++) cin >> arr[i];
        int key;
        cin >> key;
        Solution ob;
        int found = ob.binarysearch(arr, N, key);
        cout << found << endl;
    }
}
  // } Driver Code Ends