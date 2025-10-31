class Solution{
    public:
     int maxArea(vector<int>&height){
        int left=0;
        int right-nums.size()-1;
        int maxArea=0;

        while(left<right){
            int minHeight=min(height[left],height[right]);
            int width=right-left;

            int currentArea=midHeight*width;
            maxArea=max(maxArea,currentArea);

            if(height[left]<heightpright){
                left++;
            }
            else{
                right--;
            }
        }
        return maxArea;
     }
}