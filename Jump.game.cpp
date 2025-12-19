class Solution {
public:
    bool canJump(vector<int>& nums) {
        int lastPoint = 0;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            if (i > lastPoint) {
                return false;
            }
            lastPoint = max(lastPoint, i + nums[i]);
            if (lastPoint >= n - 1) {
                return true;
            }
        }
        return false;
    }
};