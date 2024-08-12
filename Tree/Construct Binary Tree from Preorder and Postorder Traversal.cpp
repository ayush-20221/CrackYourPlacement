class Solution {
public:

 TreeNode* constructFromPrePost(vector<int>& pre,int psi, int pei, vector<int>& post,int ppsi, int ppei) 
 {
    if(psi>pei) return NULL ;

 TreeNode* root = new TreeNode(pre[psi]) ;

 if(psi==pei) return root ;
 int idx  = ppsi ; 
 while(post[idx]!= pre[psi+1]) idx++ ;
 int tne = idx - ppsi + 1 ;

root->left = constructFromPrePost(pre,psi+1,psi+tne,post,ppsi,idx);
root->right = constructFromPrePost(pre,psi+tne+1,pei,post,idx+1,ppei);
return root ;

    }


    TreeNode* constructFromPrePost(vector<int>& pre, vector<int>& post) {
        int n = pre.size() ;
        return constructFromPrePost(pre,0,n-1,post,0,n-1);

    }
};