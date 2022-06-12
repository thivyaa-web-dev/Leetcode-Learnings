class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int n = nums.size(),cur_sum=0,ans =0,l=0,r=0;
        unordered_set<int>s;
        while(r<n){
            while(s.find(nums[r])!=end(s)) //delete from the current subarray until there is a duplicate
                cur_sum -= nums[l],s.erase(nums[l++]);
            cur_sum+=nums[r],s.insert(nums[r++]);
            ans = max(ans,cur_sum);
            
        }
        return ans;
    }
};