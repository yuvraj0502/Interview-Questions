/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxDepth=-1;
    int leftNode=0;
    
    void leftTreeNode(TreeNode* root,int currentDepth){
        if(root==nullptr){
            return ;
        }
        if(currentDepth>maxDepth){
            maxDepth=currentDepth;
            leftNode=root->val;
        }
        leftTreeNode(root->left,currentDepth+1);
        leftTreeNode(root->right,currentDepth+1);
    }

    int findBottomLeftValue(TreeNode* root) {
        if(root==nullptr){
            return -1;
        }
        
        leftTreeNode(root,0);
        return leftNode;
    }
};