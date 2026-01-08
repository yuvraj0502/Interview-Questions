/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* buildTreeHelper(vector<int>& inorder, vector<int>& postorder,
                              int& postorderIndex, int inorderStart,
                              int inorderEnd) {
        if (inorderStart > inorderEnd) {
            return nullptr;
        }
        TreeNode* root = new TreeNode(postorder[postorderIndex]);
        postorderIndex--;

        int inorderIndex = 0;
        for (int i = inorderStart; i <= inorderEnd; i++) {
            if (inorder[i] == root->val) {
                inorderIndex = i;
                break;
            }
        }
        root->right = buildTreeHelper(inorder, postorder, postorderIndex,
                                      inorderIndex + 1, inorderEnd);
        root->left = buildTreeHelper(inorder, postorder, postorderIndex,
                                     inorderStart, inorderIndex - 1);
        
        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int postorderIndex = postorder.size() - 1;
        return buildTreeHelper(inorder, postorder, postorderIndex, 0,
                               inorder.size() - 1);
    }
};