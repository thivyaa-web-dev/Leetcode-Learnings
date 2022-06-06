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
    vector<int> inorderTraversal(TreeNode* root) {
        //first, we create a stack 
        stack<TreeNode*>st;
        //create a node and assign it to root 
        TreeNode*node = root;
        //declare a vector which stores inorder 
        vector<int>inorder;
        while(true){
        //if the node that is the root is not null, we take that and insert it into stack
            if(node != NULL){
                st.push(node);
        //after pushing into stack, move to the left 
                node = node->left;
            }
            else{
            //if you traverse a tree and end up getting null, this is what you need to do 
            //if stack is empty there are no nodes to travel
                if(st.empty() == true) break;
            //else if the st is not empty, whatever is at the top we will take it 
                node = st.top();
                st.pop();
            //and this is eventually inorder
                inorder.push_back(node->val);
                node = node->right;
            }
                
        }
        return inorder;
    }
};

//TC :O(n) , as we traverse every node 
// SC: O(n), as we use a auxilary space