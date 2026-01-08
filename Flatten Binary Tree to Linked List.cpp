class Solution{
    public:
    void flatten(TreeNode* root){
        if(root==nullptr){
            return;
        }
        flatten(root->left);
        flatten(root->right);

        TreeNode* tempRight=root->right;
        root->right=root->left;
        root->left=nullptr;

        TreeNode* current=root;
        while(current->right!=nullptr){
            current=current->right;
        }
        current->right=tempRight;
    }
}