class Solution{
    public:
    void pathTree(TreeNode* root,stint path,vector<string>&result){
        if(root==nullptr){
            return;
        }
        path+=to_string(root->val);
        if(root->left==nullptr && root->right==nullptr){
            result.push_back(path);
            return;
        }
        path+="->";
        pathTree(root->left,path,result);
        pathTree(root->right,path,result);
    };
    
    vector<string>binaryTreePaths(TreeNode* root){
        if(root==nullptr){
            return {};
        }
        vector<string>result;
        string path="";
        pathTree(root,path,result);
        return result;
    }
}