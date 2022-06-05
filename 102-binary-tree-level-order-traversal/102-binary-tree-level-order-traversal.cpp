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
    vector<vector<int>> levelOrder(TreeNode* root) {
    vector<vector<int>> ans; //we are using a ds that is going to store list or level wise traversals 
    if(root == NULL) return ans; //if the tree that is given to us, is null we are going to return empty 
    queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int size = q.size(); //whatever is the size of the q , I will traverse for that 
            vector<int>level;
            for(int i=0;i<size;i++){
                TreeNode*node = q.front();
                q.pop();
                if(node->left!=NULL) q.push(node->left);
                if(node->right!=NULL) q.push(node->right);
                level.push_back(node->val);

            }
            ans.push_back(level);
            
        }
        return ans;
        
        
       
    }
};