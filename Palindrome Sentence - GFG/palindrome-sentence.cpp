// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h> 
using namespace std; 


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	bool sentencePalindrome(string s) 
	{
	    // code here 
	   int l =0, h=s.length()-1;
	   //lowercase stirng 
	   for(int i =0;i<=h;i++)
	   s[i] = tolower(s[i]);
	   //compare the character until they are equal 
	   while(l<=h){
	       //if there is another symbol in the left of sentence
	        if (!(s[l] >= 'a' && s[l] <= 'z'))
            l++;
  
        // If there is another symbol in right
        // of sentence
        else if (!(s[h] >= 'a' && s[h] <= 'z'))
            h--;
  
        // If characters are equal
        else if (s[l] == s[h])
            l++, h--;
	       
	       else
	       return false;
	       
	   }
	   return true;
	   
	}
};

// { Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string str;
        getline(cin,str);
        Solution ob;
        cout<<ob.sentencePalindrome(str)<<endl;
    }
    return 0;
}  

  // } Driver Code Ends