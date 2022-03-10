class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //this can be done using hashmap 
        //keep storing the elements in the frequency table, and if its greater than n/2 retrun it 
        unordered_map<int, int>mpp;
        for(int it:nums){
            if(++mpp[it]>nums.size()/2){
                return it;
            }
        }
        return 0;
        
    }
};