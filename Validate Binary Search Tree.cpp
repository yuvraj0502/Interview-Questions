class Solution{
    public:
    bool validateBST(TreeNode* root, long minVal, long maxVal){
        if(root==nullptr){
            return true;
        }
        if(root->val<=minVal || root->val>=maxVal){
            return false;
        }
        return validateBST(root->left, minVal, root->val) && validateBST(root->right, root->val, maxVal);
    };
    
    bool isValidBST(TreeNode* root){
        return validateBST(root, LONG_MIN, LONG_MAX);
    }
}