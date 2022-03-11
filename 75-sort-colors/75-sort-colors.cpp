class Solution {
public:
    void sortColors(vector<int>& nums) {
       int l = 0; 
        int h = nums.size() - 1; 
        int mid = 0; 

        while (mid <= h) { 
            switch (nums[mid]) { 

            // If the element is 0 
            case 0: 
                swap(nums[l++], nums[mid++]); 
                break; 

            // If the element is 1 . 
                 case 1: 
                mid++; 
                break; 

            // If the element is 2 
            case 2: 
                swap(nums[mid], nums[h--]); 
                break; 
            }
        }
    }
};