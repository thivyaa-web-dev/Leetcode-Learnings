class Solution {
public:
    int removePalindromeSub(string s) {
        //keep the pointers on the extremes of the string
        int i=0,j=s.size()-1;
        while(i<j){
            //if string is not a palindrome return 2
            if(s[i]!=s[j]) return 2;
            //increase the pointer which is in the front 
            //decrease the pointer which is in the end 
            i++;
            j--;
        }
        return 1;
        
    }
};