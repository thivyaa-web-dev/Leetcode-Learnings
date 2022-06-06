class Solution {
public:
    int height(TreeNode* root) {
        if (!root)
            return 0;
        int left = height(root->left);
        int right = height(root->right);
        return (left == -1 || right == -1 || abs(left-right) > 1) ? -1 : max(left, right)+1;
    }
    
    bool isBalanced(TreeNode* root) {
        return height(root) != -1;
    }
};
               
        //T(c) :O(n)
        // S(C) :O(n)