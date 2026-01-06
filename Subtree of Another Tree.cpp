class Solution{
    public:

    bool isIdentical(TreeNode* root,TreeNode* subRoot){
        if(root==nullptr && subRoot==nullptr){
            return true;
        }
        if(root==nullptr || subRoot==nullptr){
            return false;
        }
        if(root->val!=subRoot->val){
            return false;
        }
        return isIdentical(root->left,subRoot->left) &&
                isIdentical(root->right,subRoot->right);
    };

    bool isSubtree(TreeNode* root,TreeNode* subRoot){
        if(root==nullptr && subRoot==nullptr){
            return true;
        }
        if(root==nullptr || subRoot==nullptr){
            return false;
        }
        if(root->val==subRoot->val && isIdentical(root,subRoot)){
            return true;
        }
        return isSubtree(root->left,subRoot) ||
                isSubtree(root->right,subRoot);    
    }
}