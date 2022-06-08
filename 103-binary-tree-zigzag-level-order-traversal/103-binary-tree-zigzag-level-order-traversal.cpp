/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
      vector < vector < int >> result;
  if (root == NULL) {
    return result;
  }

  queue < TreeNode * > nodesQueue;
  nodesQueue.push(root);
//we are using a flag, that is initialized to be true 
//true means leftoright
//false means rightoleft
  bool leftToRight = true;
        
        
//we need to now traverse in the queue 

  while (!nodesQueue.empty()) {
    int size = nodesQueue.size();
    vector < int > row(size);
    //we need to run a for loop for all the nodes of that level
    for (int i = 0; i < size; i++) {
      TreeNode * node = nodesQueue.front();
      nodesQueue.pop();

      // find position to fill node's value
      //depending on the flagLeftoright, we can either insert it from the front or the back
      //only thing that is made sure is if to push it from the front or from the back
        
      int index = (leftToRight) ? i : (size - 1 - i);

      row[index] = node -> val;
      if (node -> left) {
        nodesQueue.push(node -> left);
      }
      if (node -> right) {
        nodesQueue.push(node -> right);
      }
    }
    // after this level
    leftToRight = !leftToRight;
    result.push_back(row);
  }
  return result;
}
};