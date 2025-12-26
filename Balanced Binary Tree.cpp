class Solution{
    public:

    int maxDepth(TreeNode* root){
        if(root==nullptr){
            return 0;
        }
        int leftNode=maxDepth(root->left);
        int rightNode=maxDepth(root->right);
        return max(leftNode,rightNode)+1;
    };

    

    bool isBalanced(TreeNode* root){
        if(root==nullptr){
            return true;
        }
        int leftDepth=maxDepth(root->left);
        int rightDepth=maxDepth(root->right);

        if(abs(leftDepth-rightDepth)>1){
            return false;
        }
        return isBalanced(root->left) && isBalanced(root->right);
        
    }
};