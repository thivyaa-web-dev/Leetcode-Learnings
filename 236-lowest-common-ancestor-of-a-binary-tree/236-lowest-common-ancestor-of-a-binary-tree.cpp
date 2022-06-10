/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        //base case 
        if(root==NULL||root==p||root==q){
            return root;
        }
        //after that move to the left and move to the right
        TreeNode*left = lowestCommonAncestor(root->left,p,q);
        TreeNode*right = lowestCommonAncestor(root->right,p,q);
        //result
        if(left == NULL){
            return right;
        }
        else if(right == NULL){
            return left;
        }
        else{ //if both left and right are null
            return root;
        }

        
    }
};