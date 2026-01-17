class Solution{
    public:
    int minDistance=INT_MAX;
    int prev=-1;

    void inorderTraversal(TreeNode* root){
        if(root==nullptr){
            return;
        }
        inorderTraversal(root->left);
        if(prev!=-1){
            minDistance=min(minDistance,root->val-prev);
        }
        prev=root->val;
        inorderTraversal(root->right);
    }

    int minDiffInBST(TreeNode* root){
        inorderTraversal(root);
        return minDistance;
    }
};