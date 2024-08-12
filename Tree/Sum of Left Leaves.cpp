    int sum = 0 ;

    void helper(TreeNode* root) {
        if(root==NULL) return ;
        if(isLeaf(root->left)) sum += root->left->val ; 
        helper(root->left) ;
        helper(root->right) ;
    }

    bool isLeaf(TreeNode* root)
    {
          if(root==NULL) return false;
           if(root->left==NULL && root->right==NULL) return true ; 
           return false ;

    }


    int sumOfLeftLeaves(TreeNode* root) {
        helper(root) ;
        return sum ;
    }
};