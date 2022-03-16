//Algorithm
// pushed = [1,2,3,4,5] popped =[4,5,3,2,1]
// 1.Pointer i will iterate over the pushed array and pointer j will iterate over the popped array.
// 2.since the top element of the popped array is not equal to pushed element in the stack, we are going to push the element in the stack.
// 3. Keep iterating the pushed array until you match the element in the popped array.
// 4.Keep pushing the elements of the pushed array into the stack until you reach 4.
// 5.Once you reach 4, the popped element value and the top of the stack matches.
// 6.as both the 4 in pushed and popped element are equal , we pop the element from the stack.
// 7.now when it reaches 5, we need not need to pop the element but push the element.

class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int>s;
        int i =0;
        for(int j=0;j<pushed.size();j++){
            s.push(pushed[j]);
//check if the current top element of the stack matches with the ith element that needs to get popped 
        while (!s.empty() && s.top() == popped[i]) s.pop(), ++i;
            
            
        }
        return s.empty();
    }
};