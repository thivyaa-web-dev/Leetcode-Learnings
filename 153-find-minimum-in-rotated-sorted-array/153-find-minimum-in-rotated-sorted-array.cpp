class Solution {
public:
    int findMin(vector<int>& nums) {
        //if the size is 1, then just return that element
        if(nums.size() == 1){
            return nums[0];
            
        }
        //intialize the left and right pointers 
        int left =0, right = nums.size()-1;
        
        //if the last element is greater than the 1st element there is no rotation
        //hence the smallest element is the first element
        if(nums[right]>nums[0]){
            return nums[0];
        }
        //Now do the binary search 
        while(right>=left){
            //find the mid element 
            int mid = left+(right-left)/2;      
//if the mid element is greater than its next lement then mid+1 is the smallest 
//This would be the point of change, from higher to lower.
        if(nums[mid]>nums[mid+1]){
            return nums[mid+1];
        }
//if the mid element is lesser than the previous element then the mid element is smallers
            if(nums[mid-1]>nums[mid]){
                return nums[mid];
            }
            
//if the mid element value is greater than the 0th element this means
//the least value is still somewhere in the right as we are still dealing with elements
//greater than nums[0]
            if(nums[mid]>nums[0]){
                left = mid+1;
            }else{
        //if nums[0] is greater than the mid value then this means the smallest value is somewhere in the left 
                
                right = mid-1;
            }     
        }
        return -1;
        
    }
};