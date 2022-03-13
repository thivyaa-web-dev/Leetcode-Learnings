class Solution {
    private:
    void findSubsets(int ind, vector<int>&nums,vector<int>&ds,vector<vector<int>>&ans){
    ans.push_back(ds);
    for(int i=ind;i<nums.size();i++){
        if(i!=ind && nums[i] == nums[i-1]) continue;
        ds.push_back(nums[i]);
        findSubsets(i+1, nums,ds,ans); //we now need to pick i+1th 
        ds.pop_back();
    }
        
    }
 
        
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>ans; //this answer array is going to store all the subsets
        vector<int>ds; //initializing an empty data structure to be used 
        sort(nums.begin(), nums.end()); //if we sort them the duplicates will be together 
        findSubsets(0, nums,ds,ans);
        return ans;    
        
    }
};