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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root == NULL) return new TreeNode(val);
//create a copy of the root , because at the end, we need to return the root itself
        TreeNode *cur = root;
//now you need to start the traversal 
        while(true){
    //if the v
            if(cur->val <= val){
                if(cur->right!=NULL) cur = cur->right;
                else{
                    cur->right = new TreeNode(val);
                    break;
                }
            } else{
                if(cur->left!=NULL) cur = cur->left;
                else{
                    cur->left = new TreeNode(val);
                    break;
                }
            }
        }
        return root;
        
    }
};