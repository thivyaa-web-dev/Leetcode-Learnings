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
    int countNodes(TreeNode* root) {
    //if the root is null, we return 0, saying that , the total number of nodes is 0
        if(root == NULL) return 0;
    //Finding lh and rh 
        int lh = findHeightLeft(root);
        int rh = findHeightRight(root);
        
        if(lh == rh) return (1<<lh)-1;
        
        return 1+countNodes(root->left) + countNodes(root->right);
        
    }
    
    int findHeightLeft(TreeNode*node){
        int ht =0;
    //I'll run a while loop that keeps on going to the left,till it exists
        while(node){
            ht++;
            node = node->left;
        }
        return ht;
    }
     int findHeightRight(TreeNode*node){
        int ht =0;
    //I'll run a while loop that keeps on going to the left,till it exists
        while(node){
            ht++;
            node = node->right;
        }
        return ht;
    }
    
    
};