class Solution{
    public:
    TreeNode* constructBST(vector<int>& nums,int left,int right){
        if(left>right){
            return nullptr;
        }
        int mid=left+(right-left)/2;
        TreeNode* node=new TreeNode(nums[mid]);
        node->left=constructBST(nums,left,mid-1);
        node->right=constructBST(nums,mid+1,right);
        return node;
    };
    
    TreeNode* sortedArrayToBST(vector<int>& nums){
        return constructBST(nums,0,nums.size()-1);
    }
};