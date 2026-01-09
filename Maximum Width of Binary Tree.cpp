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
    int  maxWidth = 0;
    vector<long long> levelMinIndex;
    void levelOrderTraversal(TreeNode* root, int  level, long long index) {
        if (root == nullptr) {
            return;
        }
        if (level == levelMinIndex.size()) {
            levelMinIndex.push_back(index);
        }
        long long   currentIndex = index - levelMinIndex[level];
        maxWidth = max(maxWidth, (int)(currentIndex+1));
        levelOrderTraversal(root->left, level + 1, 2 * currentIndex+1);
        levelOrderTraversal(root->right, level + 1, 2 * currentIndex + 2);
    };

    int widthOfBinaryTree(TreeNode* root) {
        if (root == nullptr) {
            return 0;
        }
        levelOrderTraversal(root, 0, 0);
        return maxWidth;
    }
};