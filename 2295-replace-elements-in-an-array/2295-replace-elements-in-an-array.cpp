class Solution {
public:
    vector<int> arrayChange(vector<int>& nums, vector<vector<int>>& op) {
        //take a map and store first 
        unordered_map<int,int>store;
        for(int i=0;i<nums.size();i++) store[nums[i]] =i;
        for(auto i:op){
               nums[store[i[0]]]= i[1];           //replace value to its index
        store[i[1]]= store[i[0]];       //update new value with its index
        }
        return nums;
    }
};