/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if (root == nullptr) {
            return nullptr;
        }
        if (root == p || root == q) {
            return root;
        }
        TreeNode* leftCA = lowestCommonAncestor(root->left, p, q);
        TreeNode* rightCA = lowestCommonAncestor(root->right, p, q);

        if (leftCA != nullptr && rightCA != nullptr) {
            return root;
        }
        if (leftCA != nullptr) {
            return leftCA;
        }
        return rightCA;
    }
};