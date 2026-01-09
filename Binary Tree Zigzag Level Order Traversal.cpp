class Solution{
    public:
    void levelOrderTraversal(TreeNode* root,int level,vector<vector<int>>&result){
        if(root==nullptr){
            return;
        }
        if(result.size()==level){
            result.push_back({});
        }
        result[level].push_back(root->data);
        levelOrderTraversal(root->left,level+1,result);
        levelOrderTraversal(root->right,level+1,result);
    };

    
    vector<vector<int>>zigzagLevelOrder(TreeNode* root){
        if(root==nullptr){
            return {};
        }
        vector<vector<int>>result;
        levelOrderTraversal(root,0,result);
        for(int i=0;i<result.size();i++){
            if(i%2!=0){
                reverse(result[i].begin(),result[i].end());
            }
        }
        return result;
    }
}