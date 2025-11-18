class Solution{
    public:
    int firstPosition(vector<int>&nums,int target){
        int start=0;
        int end=nums.size()-1;
        int firstPos=-1;

        while(start<=end){
            int mid=start+(end-start)/2;
            if(nums[mid]==target){
                firstPos=mid;
                end=mid-1;
            }
            else if(nums[mid]<target){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        return firstPos;
    };

    int secondPosition(vector<int>&nums,int target){
        int start=0;
        int end=nums.size()-1;
        int lastPos=-1;

        while(start<=end){
            int mid=start+(end-start)/2;
            if(nums[mid]==target){
                lastPos=mid;
                start=mid+1;
            }
            else if(nums[mid]<target){}
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        return lastPos;
    };

    vector<int> searchRange(vector<int>& nums, int target){
        int firstPos=firstPosition(nums,target);
        int lastPos=secondPosition(nums,target);
        return {firstPos,lastPos};
    }
