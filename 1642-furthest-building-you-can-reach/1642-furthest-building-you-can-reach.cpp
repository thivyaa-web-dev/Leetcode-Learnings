//heap store the k difference
//each move if the hieght diff d>0
//push them into a priority queue
//if size of queue exceeds the ladders, then we need to use brick
//then we pop out the smalllest difference and reduce the brick 




class Solution {
public:
     int furthestBuilding(vector<int>& A, int bricks, int ladders) {
        priority_queue<int> pq;
        for (int i = 0; i < A.size() - 1; i++) {
            int d = A[i + 1] - A[i];
            if (d > 0)
                pq.push(-d);
            if (pq.size() > ladders) {
                bricks += pq.top();
                pq.pop();
            }
            if (bricks < 0)
                return i;
        }
        return A.size() - 1;
    }
};