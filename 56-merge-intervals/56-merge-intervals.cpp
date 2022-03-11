class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> mergedIntervals;
        //if we are not given any interval, in that case we need to return empty ans 
        // please be concerened of the edge cases 
        if(intervals.size() == 0){
            return mergedIntervals;
        }
        sort(intervals.begin(), intervals.end());
        //we take the vector int and put the first interval into it 
        vector<int>tempInterval = intervals[0];
        
        //lineraly traverse through the intervals given to us 
        for(auto it :intervals){
            if(it[0] <=tempInterval[1]){
                tempInterval[1] = max(it[1], tempInterval[1]);
            } else{
                mergedIntervals.push_back(tempInterval);
                tempInterval = it;
            }
        }
        mergedIntervals.push_back(tempInterval);
        return mergedIntervals;
    }
};