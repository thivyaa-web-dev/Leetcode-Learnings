class Solution {
public:
    int fib(int n) {
        if(n<=1) return n;
        return fib(n-1)+fib(n-2);
        
        //else
        //return n<=1? n: fib(n-1)+fib(n-2);
        
    
        
    }
};