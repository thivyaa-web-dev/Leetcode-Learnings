class Solution {
public:
    void prefix(string &s){
        int idx = 0;
        for(int i=0;i<s.size();i++){
            if(s[i] == '('){
                idx++;
            }
            else if(s[i] == ')'){
                if(idx == 0){
                    s[i] = '-';
                }
                else{
                    idx--;
                }
            }
            
        }
    }
    void suffix(string &s){
        int idx = 0;
        for(int i=s.size()-1;i>=0;i--){
            if(s[i] == ')'){
                idx++;
            }
            else if(s[i] == '('){
                if(idx == 0){
                    s[i] = '-';
                }
                else{
                    idx--;
                }
            } 
            
        }
    }
    string minRemoveToMakeValid(string s) {
        string result = "";
        prefix(s);
        suffix(s);
        
        for(char i:s){
            if(i!='-'){
                result += i;
            }
        }
        return result;
    }
};