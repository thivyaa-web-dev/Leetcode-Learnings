class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans; 
        unordered_map<int, int> mpp; 
        for(int i = 0;i<nums.size();i++) {
            //if it exists in the hastable it will never point outside of the hashtable( it will never point at the last element at the hashtable)
            if(mpp.find(target - nums[i]) != mpp.end()) {
                ans.push_back(mpp[target-nums[i]]); 
                ans.push_back(i); 
                return ans; 
            }
            mpp[nums[i]] = i; 
        }
        return ans; 
        
    }
};