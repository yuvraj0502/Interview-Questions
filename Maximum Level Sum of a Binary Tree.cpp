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
    void levelOrder(TreeNode* root, int level, vector<int>& result) {
        if (root == nullptr) {
            return;
        }
        if (level == result.size()) {
            result.push_back(0);
        }
        result[level] += root->val;
        levelOrder(root->left, level + 1, result);
        levelOrder(root->right, level + 1, result);
    }
    int maxLevelSum(TreeNode* root) {
        if (root == nullptr) {
            return 0;
        }
        vector<int> result;
        levelOrder(root, 0, result);
        int maxSum = INT_MIN;
        int level = 0;
        for (int i = 0; i < result.size(); i++) {
            if (result[i] > maxSum) {
                maxSum = result[i];
                level = i + 1;
            }
        }
        return level;
    }
};