class Solution{
    public:
    void postOrder(TreeNode* root,vector<int>&result){
        if(root==nullptr){
            return;
        }
        postOrder(root->left,result);
        postOrder(root->right,result);
        result.push_back(root->data);
    };
    
    vector<int>postorderTraversal(TreeNode* root){
        if(root==nullptr){
            return {};
        }
        vector<int>result;
        postOrder(root,result);
        return result;
    }
}
