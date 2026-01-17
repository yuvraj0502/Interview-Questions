class Solution{
    public:
    void inorderTraversal(TreeNode* root,vector<int>&result){
        if(root==nullptr){
            return;
        }
        inorderTraversal(root->left,result);
        result.push_back(root->val);
        inorderTraversal(root->right,result);
    };

    bool findTarget(TreeNode* root,int k){
        vector<int>result;
        inorderTraversal(root,result);
        int left=0;
        int right=result.size()-1;
        while(left<right){
            int sum=result[left]+result[right];
            if(sum==k){
                return true;
            }else if(sum<k){
                left++;
            }else{
                right--;
            }
        }
        return false;
    }
}