class BSTIterator {
stack<TreeNode*> st ;
public:
    BSTIterator(TreeNode* root) {
        push(root) ;
    }
    
    int next() {
        TreeNode *temp = st.top() ;
        st.pop() ;
        push(temp->right) ;
        return temp->val ;
    }
    
    bool hasNext() {
        return !st.empty() ;
    }
private:
void push(TreeNode* node)
{
    for(;node!=NULL;st.push(node),node=node->left) ;
}

};