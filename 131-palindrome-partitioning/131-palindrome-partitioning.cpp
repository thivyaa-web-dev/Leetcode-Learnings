class Solution {
public:
    vector<vector<string>> partition(string s) {
        //all the palindrome partioning will will stored in ds res
        vector<vector<string>>res;
        //path will store the indivual result of substrings
        vector<string>path;
        func(0,s,path,res);
        return res;
    }
        
        void func(int index,string s,vector<string>&path,vector<vector<string>>&res){
            //base case 
            //if index reaches the s.size() means we have done the partition
            if(index == s.size()){
                res.push_back(path);
                return;
            }
            for(int i=index;i<s.size();i++){
    //we can partition only if it is palindrome, func to check that 
            if(isPalindrome(s,index,i)){
                path.push_back(s.substr(index,i-index+1));
                 func(i+1,s,path,res);
                 path.pop_back();
                
            }
                
                
            }
        }  
        
    
    bool isPalindrome(string s,int start,int end){
        while(start<=end){
            if(s[start++]!=s[end--])
                return false;
        }
        return true;
    }
};