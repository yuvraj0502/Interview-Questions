class Solution{
    public:
    int heightOfBinaryTree(TreeNode* root){
        if(root==nullptr){
            return 0;
        }
        else{
            return 1 + max(heightOfBinaryTree(root->left),heightOfBinaryTree(root->right));
        }
    }
    int diameterOfBinaryTree(TreeNode* root){
        if(root==nullptr){
            return 0;
        }
        int leftdiameterOfBinaryTree=diameterOfBinaryTree(root->left);
        int rightdiameterOfBinaryTree=diameterOfBinaryTree(root->right);
        int currentdiameterOfBinaryTree=heightOfBinaryTree(root->left) +
                                        heightOfBinaryTree(root->right);
        return max(currentdiameterOfBinaryTree,
               max(leftdiameterOfBinaryTree,rightdiameterOfBinaryTree));
    }
}


class Solution {
public:
    int ans = 0;

    int heightOfBinaryTree(TreeNode* root) {
        if (root == nullptr) {
            return 0;
        }
        int leftHeight = heightOfBinaryTree(root->left);
        int rightHeight = heightOfBinaryTree(root->right);
        ans = max(ans, leftHeight + rightHeight);
        return max(leftHeight, rightHeight) + 1;
    };

    int diameterOfBinaryTree(TreeNode* root) {
        if (root == nullptr) {
            return 0;
        }
        heightOfBinaryTree(root);
        return ans;
    }
};