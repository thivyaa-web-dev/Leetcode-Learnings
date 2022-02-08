class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> set;// can take only unique elements
        for(auto x:nums)
            set.insert(x);
        if(set.size() == n)
        return false;
        else return true;
        
    }
};