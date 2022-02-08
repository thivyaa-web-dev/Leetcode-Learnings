class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> m(nums1.begin(),nums1.end());
        vector<int>res;
        for(auto it:nums2)
            if(m.count(it)){ //returns the count of occurrences of the element in the range
                res.push_back(it);
                m.erase(it); //removes the set containing either single or set of elements.
            }
        return res;

        
    }
};