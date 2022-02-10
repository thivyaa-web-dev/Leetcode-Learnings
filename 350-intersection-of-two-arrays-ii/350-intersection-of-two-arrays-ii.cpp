// class Solution {// Using Map & without sort
// public:
//     vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
//         map<int,int>freq;
//         vector<int>ans;
//         for(int i = 0;i<nums1.size();i++){
//             freq[nums1[i]]++;
//         }
//         for(int i = 0;i<nums2.size();i++){
//             if (freq[nums2[i]] > 0){
//                 freq[nums2[i]]--; 
//                 ans.push_back(nums2[i]);
//             }
//         }
//         return ans;
//     }
// };
class Solution {
    public:
    vector<int> intersect(vector<int>& a, vector<int>& b) {
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    a.erase(set_intersection(a.begin(), a.end(), b.begin(), b.end(), a.begin()), a.end());
    return a;
}
};

