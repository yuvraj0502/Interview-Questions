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
    TreeNode* buildTreeHelper(vector<int>& preorder, vector<int>& inorder,
                              int& preorderIndex, int inorderStart,
                              int inorderEnd) {
        if (inorderStart > inorderEnd) {
            return nullptr;
        }
        TreeNode* root = new TreeNode(preorder[preorderIndex]);
        preorderIndex++;

        int inorderIndex = 0;
        for (int i = inorderStart; i <= inorderEnd; i++) {
            if (inorder[i] == root->val) {
                inorderIndex = i;
                break;
            }
        }
        root->left = buildTreeHelper(preorder, inorder, preorderIndex,
                                     inorderStart, inorderIndex - 1);
        root->right = buildTreeHelper(preorder, inorder, preorderIndex,
                                      inorderIndex + 1, inorderEnd);
        return root;
    };

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int preorderIndex = 0;
        return buildTreeHelper(preorder, inorder, preorderIndex, 0,
                               inorder.size() - 1);
    }
};