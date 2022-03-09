class Solution {
public:
    int countOdds(int low, int high) {
        //return the number of odds between low and high 
        int N = (high-low)/2;
        
        //if either high or low is odd 
        if(high%2!=0|| low%2!=0)
            N+=1;
        return N;
        
    }
};