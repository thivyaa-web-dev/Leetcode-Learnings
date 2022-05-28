class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int result = nums.size();
        int i=0;
        for(int num:nums){ //for each number in the vector
            result^=num; //xor the result with number 
            result^=i; //xor the result with i
            i++; //increment i
            
            
            
        }
        return result;
    }
};