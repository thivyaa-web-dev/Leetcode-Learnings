// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
void rotate(int arr[], int n);

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int a[n] , i;
        for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        rotate(a, n);
        for (i = 0; i < n; i++)
            printf("%d ", a[i]);
        printf("\n");
    }
        return 0;
}
// } Driver Code Ends

//cyclically rotation of the array by one means, each array gets shifted by one, eventually last element 
//becomes the first element
//User function Template for C++


//store the last element in the variable temp;
//shift all the elements with one position ahead
//replace the first element with the element of array of temp
void rotate(int arr[], int n)
{
    int temp = arr[n-1];
    for(int i =n-1;i>0;i--){
        arr[i] = arr[i-1];
    }
    arr[0] = temp;
    
    
}