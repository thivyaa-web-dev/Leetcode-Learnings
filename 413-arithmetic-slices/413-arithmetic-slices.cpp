class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int n = nums.size();
        
        if(n<=2)
            return 0;
        //finding the arithmetic subbaray length
        int count =0;
        //to store arithmetic subbarray of length atleast 3 
        int res =0;
        
        for(int i =2;i<n;++i)
        {
        if(nums[i] - nums[i-1] == nums[i-1]-nums[i-2])
             ++count;
       else {count =0;}
             res += count;
      
        }
               
      return res;
    }
    
};