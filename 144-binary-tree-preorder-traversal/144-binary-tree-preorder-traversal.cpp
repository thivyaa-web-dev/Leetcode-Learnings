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
    vector<int> preorderTraversal(TreeNode* root) {
        //we need to declare a vector 
     vector<int> preorder;
        //if the tree is empty , you return empty preorder 
        if(root == NULL) return preorder;
        
        
        //you then initialize the stack 
        stack<TreeNode*>st;
        st.push(root);
        
        //you keep iterating on the stack till it is non-empty 
        while(!st.empty()){
        //now you get the top most element 
            root = st.top();
            st.pop();
            preorder.push_back(root->val);
        //check if it has a right or left on it and put it into the stack 
            if(root->right!=NULL){
                st.push(root->right);
            }
             if(root->left!=NULL){
                st.push(root->left);
            }
            
            
        }
        
        return preorder;
    }
};