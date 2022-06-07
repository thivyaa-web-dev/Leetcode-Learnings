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
    int ans =0; //we need to declare the ans variable gloabally 
    
    //we now need to find the height of the tree 
    
    int height(TreeNode* root) {
        if(!root) return 0;
        
        int lh = height(root->left);
        int rh = height(root->right);
        
        ans = max(ans, 1+lh+rh);
        return 1+max(lh,rh);
    }
    int diameterOfBinaryTree(TreeNode*root){
        if(!root) return ans; //if there is not even a root, there is not even a tree that exists 
        height(root);
        return ans-1;
        
    }
};