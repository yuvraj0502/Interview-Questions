class Solution{
    public:
    void preOrder(TreeNode* root,vector<int>&result){
        if(root==nullptr){
            return;
        }
        result.push_back(root->data);
        preOrder(root->left,result);
        preOrder(root->right,result);
    };
    
    vector<int>preorderTraversal(TreeNode* root){
        if(root==nullptr){
            return {};
        }
        vector<int>result;
        preOrder(root,result);
        return result;
    }
}