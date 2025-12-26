class Solution{
    public:
    bool isMirror(TreeNode* leftSub,TreeNode* rightSub){
        if(leftSub==nullptr && rightSub==nullptr){
            return true;
        }
        if(leftSub==nullptr || rightSub==nullptr){
            return false;
        }
        if(leftSub->val!=rightSub->val){
            return false;
        }
        return isMirror(leftSub->left,rightSub->right) &&
               isMirror(leftSub->right,rightSub->left);
    };
    
    bool isSymmetric(TreeNod* root){
        if(root==nullptr){
            return true;
        }
        return isMirror(root->left,root->right);
    }
};