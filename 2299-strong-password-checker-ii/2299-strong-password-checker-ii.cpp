class Solution {
public:
    bool strongPasswordCheckerII(string &p) {
        if(p.size()<8) return false;
        bool low =false, upper = false,digit = false,special =false;
        for(auto it:p){
            if(it>='a' and it<='z')low = true;
        else if(it>='A' and it<='Z')upper = true;
        else if(isdigit(it)) digit = true;
            else special = true;
            
        }
        //check the 6th condition 
        for(int i=0;i+i<p.size();i++) if(p[i] == p[i+1]) return false;
        if(low and upper and special and digit) return true;
        return false;
        
    }
};