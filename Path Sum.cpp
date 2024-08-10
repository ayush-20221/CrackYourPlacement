class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(!root) return false ;
        if(!root->left && !root->right) return (targetSum==root->val) ;
        bool flag = false  ;
        if(root->left) flag = hasPathSum(root->left,targetSum-root->val) ;
        if(root->right) flag = flag || hasPathSum(root->right,targetSum-root->val) ;
    return flag ;

    }
};