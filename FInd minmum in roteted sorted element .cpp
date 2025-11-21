class Solution{
    public:
    int findMin(vector<int>& nums){
        int start=0;
        int end=nums.size()-1;
        int n=nums.size();

        while(start<=end){
            it(nums[start]<=nums[end]){
                return nums[start];
            }
            int mid=start+(end-start)/2;
            int next=(mid+1)%n;
            int prev=(mid+n-1)%n;

            if(nums[mid]<=nums[next]&& nums[mid]<=nums[prev]){
                return nums[mid];
            }
            else if(nums[mid]>=nums[start]){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        return -1;
    }

}