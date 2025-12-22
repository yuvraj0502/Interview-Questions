class Solution{
    public:
    int splitArray(vector<int>&nums,int k){
        sort(nums.begin(),nums.end());
        reverse(nums.begin(),nums.end());
        int i=0;
        int maxSum=0;
        while(i<k){
            int currentSum=0;
            for(int j=i;j<nums.size();j+=k){
                currentSum+=nums[j];
            }
            maxSum=max(maxSum,currentSum);
            i++;
        }
        return maxSum;
    }
}