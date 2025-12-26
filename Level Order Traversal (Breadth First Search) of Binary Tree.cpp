class Solution{
    public:
    void levelOrder(TreeNode* root,int level,vector<vector<int>>&result){
        if(root==nullptr){
            return;
        }
        if(result.size()==lelel){
            result.push_back({};);
        }
        result[level].push_back(root->data);
        levelOrder(root->left,level+1,result);
        levelOrder(root->right,level+1,result);
    };

    vector<vector<int>r>levelorderTraversal(TreeNode* root){
        if(root==nullptr){
            return {};
        }
        vector<vector<int>>result;
        levelOrder(root,0,result);
        return result;
    }
};