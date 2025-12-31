class Solution{
    public:
    void levelOrder(TreeNode* root,int level,vector<int>&result){
        if(root==nullptr){
            return;
        }
        if(level==result.size()){
            result.push_back(root->val);
        }
        levelOrder(root->right,level+1,result);
        levelOrder(root->right,level+1,result);
    };
    
    vector<int>rightSideView(TreeNode* root){
        if(root==nullptr){
            return {};
        }
        vector<int>result;
        levelOrder(root,0,result);
        return result;
    }
}