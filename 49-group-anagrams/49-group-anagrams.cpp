class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
    vector<vector<string>>ans;
    unordered_map<string,vector<string>>mpp;
     //check each and every word of strs 
    for(auto x: strs){
        string temp = x; 
        sort(x.begin(), x.end());
        mpp[x].push_back(temp);
    }
        
        for(auto x :mpp){
            ans.push_back(x.second);
        }
        return ans;
           
        
    }
};