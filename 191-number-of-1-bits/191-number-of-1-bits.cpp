class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count =0; //count of set bit 
        while(n>0){
            count++;
            n=n&(n-1);
        }
      
            
        return count;
        
        
    }
};