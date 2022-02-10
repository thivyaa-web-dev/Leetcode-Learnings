// Then, we use simple DP: for each house, we can't rob two adjacent houses. So either we rob the previous one - dp[i-1], or the two before and the current one - nums[i]+dp[i-2].
// Time Complexity: O(n)
// Space Complexity: O(n)

class Solution {
public:
    int rob(vector<int>& nums) {
        //edge cases 
        if(nums.size() == 0) return 0;
        if(nums.size() == 1) return nums[0];
        if(nums.size() == 2) return max(nums[0],nums[1]);
        
        //dyanamic programming, decide each problem by its subproblem
        int dp[nums.size()];
        dp[0] =nums[0];
        dp[1] = max(nums[0],nums[1]);
        for(int i =2;i<nums.size();i++)
            dp[i] = max(dp[i-1], nums[i]+dp[i-2]);
        return dp[nums.size()-1];                
        
    }
};