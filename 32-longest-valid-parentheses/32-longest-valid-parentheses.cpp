class Solution {
public:
    int longestValidParentheses(string s) {
        int MAX =0; //denotes the length of max valid paranthesis
        stack<int>stk;
        stk.push(-1); //bottom of the index will always hold this 
        for(int i=0;i<s.size();i++)
            if(s[i] == '(') stk.push(i);
        else{
            stk.pop();
            if(stk.empty()) stk.push(i);
            else MAX= max(MAX, i-stk.top());
        }
      return MAX;  
        
    }
};