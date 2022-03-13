class Solution {
public:
    bool isValid(string s) {
        std::vector<char>stack;
        for(int i =0;i<s.length();i++){
            if(s[i] =='{')
                stack.push_back('}');
            else if(s[i] =='(')
                stack.push_back(')');
            else if(s[i] =='[')
                stack.push_back(']');
                
            else
            {
                if((stack.empty()) || (s[i]!=stack[stack.size()-1]))
                    return false;
                stack.pop_back();
            }
}
        
        return stack.empty();
    }
};