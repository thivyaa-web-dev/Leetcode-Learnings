class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        int ans = 1;
        sort(intervals.begin(), intervals.end(), comp());
        int start = intervals[0][0]; int end = intervals[0][1];
        int n = intervals.size();

        for(int i=1; i<n; i++) {
            if(intervals[i][0] >= start && intervals[i][0] <= end && intervals[i][1] >= start && intervals[i][1] <= end) continue;
            else {
                ans+=1;
                start = intervals[i][0];
                end = intervals[i][1];
            }
        }
        return ans;
    }
    
    struct comp {
        bool operator() (vector<int>& a, vector<int>& b) {
            if(a[0] < b[0]) return true;
            else if(a[0] == b[0]) return a[1] >= b[1];
            else return false;   
        }
    };
};