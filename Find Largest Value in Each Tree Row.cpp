class Solution{
    public:
    void LargestNumber(TreeNode* root,int level,vector<int>&result){
        if(root==nullptr){
            return;
        }
        if(level==result.size()){
            result.push_back(root->val);
        }else{
            result[level]=max(result[level],root->val);
        }
        LargestNumber(root->left,level+1,result);
        LargestNumber(root->right,level+1,result);
    };
    
    vector<int>largestValues(TreeNode* root){
        if(root==nullptr){
            return {};
        }
        vector<int>result;
        LargestNumber(root,0,result);
        return result;
    }
}