class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count =0;
        for(int i =0;i<32;i++){
            //do the right shift now 
            if(((n>>i)&1) == 1){
                count++;
            }
        }
        return count;
        
    }
};