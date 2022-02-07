class MyQueue {
public:
    stack<int>s;
    stack<int>temp;
    
//take two stack s -> primary and temporary , temp
//remove all the elements from the stack s and push it to stack temp
//push the given element in the temp
//remove all the element to temp stack to s stack

    
   MyQueue() {
        //chor do initialization \U0001f602
    }
    
    /* as it should be pushed to the back of the queue so use two stacks
        
        take two stack s primary and temporary stack as temp
        1. remove all the elements from the s stack push to temp stack
        3. now push the given element too in the temp
        4. now remove all element fron the temp stack and push all elemnt back to the s stack
    */
    void push(int x) {
        while(!s.empty())
        {
            temp.push(s.top());
            s.pop();
        }
        temp.push(x);
        while(!temp.empty()){
            s.push(temp.top());
            temp.pop();
        }
    }
    
    /*remove the element from the front of queue and return that ele */
    int pop() {
        int p=s.top();
        s.pop();
        return p;
    }
    
    /* return front element */
    int peek() {
        return s.top();
    }
    
    /* return if queue is empty */
    bool empty() {
        return s.empty();
    }
};    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */