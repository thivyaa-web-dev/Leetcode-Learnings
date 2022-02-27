class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> set;// can take only unique elements
        for(auto x:nums) //iterate them through
            set.insert(x); // you need to add them
        if(set.size() == nums.size())
        return false; 
        else return true;
        
    }
};