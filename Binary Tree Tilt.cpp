class Solution{
    public:
    int findTilt(TreeNode* root){
        if(root==nullptr){
            return 0;
        }
        int leftTilt=findTilt(root->left);
        int rightTilt=findTilt(root->right);

        int leftSum=0;
        if(root->left!=nullptr){
            leftSum=root->left->data;
        }

        int rightSum=0;
        if(root->right!=nullptr){
            rightSum=root->right->data;
        }

        root->data=leftSum+rightSum+root->data;

        return leftTilt+rightTilt+abs(leftSum-rightSum);
    }
}