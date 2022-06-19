// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        // Your code here
        //all the balance paranthesis questions are solved using only stack 
        
        std::vector<char>stack;
        for(int i=0;i<x.length();i++){
            if(x[i] == '{')
            stack.push_back('}');
            else if(x[i] == '(')
            stack.push_back(')');
            else if(x[i] == '[')
            stack.push_back(']');
            
            else {
                if((stack.empty()) || (x[i]!= stack[stack.size()-1]))
             return false;
                stack.pop_back();
            }
            
            
            
        }
        return stack.empty();

    }

};

// { Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}  // } Driver Code Ends