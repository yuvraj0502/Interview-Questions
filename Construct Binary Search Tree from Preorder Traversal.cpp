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
    TreeNode* buildTree(vector<int>& preorder, int& start, int maxValue) {
        if (start >= preorder.size() || preorder[start] > maxValue) {
            return nullptr;
        }
        TreeNode* root = new TreeNode(preorder[start]);
        start++;

        root->left = buildTree(preorder, start, root->val);
        root->right = buildTree(preorder, start, maxValue);
        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int start = 0;
        return buildTree(preorder, start, INT_MAX);
    }
};