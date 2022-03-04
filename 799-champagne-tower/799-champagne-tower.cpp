//we have a constraint on size 100, which is the max amount of cups we can have per row.
//In each iteration we use first i cells in the array to keep track of filling of cups in the ith row
//in the first iteration the array looks like this:
// [4, 0, 0, 0, ...]
// second iteration:
// [1.5, 1.5, 0, 0, 0, ...]
// third:
// [0.25, 0.5, 0.25, 0, 0, ...]
// at the end we can just return the requested index.
// we go in the reversed order , in inner loop because we do not want to miss previous row, until updatng the previous one


class Solution {
public:
    double champagneTower(int poured, int query_row, int query_glass) {
    vector<double> res(101);
        res[0] = poured;
        for(int row=1; row<=query_row;row++)
            for(int i =row;i>=0;i--){
                res[i] = max(0.0, (res[i] - 1) / 2);
                res[i + 1] += res[i];
            }
        
                return min(res[query_glass], 1.0);


        
    }
};