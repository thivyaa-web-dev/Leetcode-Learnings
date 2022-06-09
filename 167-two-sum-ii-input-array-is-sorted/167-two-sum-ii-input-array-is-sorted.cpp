class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int low =0 , high = nums.size()-1;
        vector<int>sum;
        while(low<high)
        {
            if(nums[low]+nums[high] == target)
            {
                sum.push_back(low +1);
                sum.push_back(high+1);
                return sum;
            }
            else if(nums[low]+nums[high]>target){
                high--;
            }
            else
                low++;
            
        }
        return sum;
        
        
    }
};