class Solution{
    public:
    TreeNode* insertInToBST(TreeNode* root,int val){
        if(root==nullptr){
            return new TreeNode(val);
        }
        if(val>root->val){
            root->right=insertInToBST(root->right,val);
        }else{
            root->left=insertInToBST(root->left,val);
        }
        return root;
    }
}