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
    int pathSum(TreeNode* root, int& rootValue) {
        if (root == nullptr) {
            return 0;
        }
        int leftSum = max(0, pathSum(root->left, rootValue));
        int rightSum = max(0, pathSum(root->right, rootValue));
        rootValue = max(rootValue, leftSum + rightSum + root->val);
        return max(leftSum, rightSum) + root->val;
    }

    int maxPathSum(TreeNode* root) {
        if (root == nullptr) {
            return 0;
        }
        int rootValue = root->val;
        pathSum(root, rootValue);
        return rootValue;
    }
};