class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        unordered_map<int, int>mpp;
        for (int i:nums)
            mpp[i]++;
        int res =0;
        for(auto x:mpp){
            if(k == 0)
            {
                if(x.second>1)
                    res++;
            }
            else if(mpp.find(x.first +k)!= mpp.end())
                res++;
        }
        return res;
        
    }
};