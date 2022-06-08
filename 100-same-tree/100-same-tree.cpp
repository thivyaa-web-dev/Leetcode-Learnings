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
    bool isSameTree(TreeNode* p, TreeNode* q) {
    //if both the trees are null, then both the trees are equal
        if(p == NULL || q == NULL ) return p == q ;
        
  //we need to check both the values, and also check if the values are same to the right and the left
        return(p->val == q->val && isSameTree(p->left, q->left)&& isSameTree(p->right, q->right));
        
    }
};