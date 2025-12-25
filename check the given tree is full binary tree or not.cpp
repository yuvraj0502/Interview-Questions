class Solution{
    public:
    bool isFullBinaryTree(TreeNode* root){
        if(root==nullptr){
            return true;
        }else if(root->left==nullptr && root->right==nullptr){
            return true;
        }else if(root->left!=nullptr && root->right!=nullptr){
            return isFullBinaryTree(root->left)&& isFullBinaryTree(root->right);
        }else{
            return false;
        }
    }
}