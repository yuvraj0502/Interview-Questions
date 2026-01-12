class Solution{
    public:
    unordered_map<int,int>sumCount;
    int maxCount=0;

    int subTreeSum(TreeNode* root){
        if(root==nullptr){
            return 0;
        }
        int leftSum=subTreeSum(root->left);
        int rightSum=subTreeSum(root->right);
        int totalSum=leftSum+rightSum+root->data;
        sumCount[totalSum]++;
        maxCount=max(maxCount,sumCount[totalSum]);
        return totalSum;
    }

    vector<int>findFrequentTreeSum(TreeNode* root){
        if(root==nullptr){
            return {};
        }
        subTreeSum(root);
        vector<int>result;
        for(auto&i:sumCount){
            if(i.second==maxCount){
                result.push_back(i.first);
            }
        }
        return result;
    }
}