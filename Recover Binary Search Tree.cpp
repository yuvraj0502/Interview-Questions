class Solution{
    public:
    TreeNode* prev=nullptr;
    TreeNode* first=nullptr;
    TreeNode* second=nullptr;

    void inorderTraversal(TreeNode* root){
        if(root==nullptr){
            return;
        }
        inorderTraversal(root->left);
        if(prev!=nullptr && prev->val>root->val){
            if(first==nullptr){
                first=prev;
            }
            second=root;
        }
        prev=root;
        inorderTraversal(root->right);
    }
    
    void recoverTree(TreeNode* root) {
        inorderTraversal(root);

        int temp=first->val;
        first->val=second->val;
        second->val=temp;
    }
};
