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
    void findPathSum(TreeNode* root, int targetSum, vector<int>& currentPath,
                     vector<vector<int>>& result) {
        if (root == nullptr) {
            return;
        }
        currentPath.push_back(root->val);
        if (root->left == nullptr && root->right == nullptr &&
            targetSum == root->val) {
            result.push_back(currentPath);
        } else {
            int newPathSum = targetSum - root->val;
            findPathSum(root->left, newPathSum, currentPath, result);
            findPathSum(root->right, newPathSum, currentPath, result);
        }
        currentPath.pop_back();
    };

    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        if (root == nullptr) {
            return {};
        }
        vector<vector<int>> result;
        vector<int> currentPath;
        findPathSum(root, targetSum, currentPath, result);
        return result;
    }
};