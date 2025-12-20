class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        vector<int> result(nums);
        sort(result.begin(), result.end());
        int n = nums.size();
        int left = (n - 1) / 2;
        int right = n - 1;
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                nums[i] = result[left];
                left--;
            } else {
                nums[i] = result[right];
                right--;
            }
        }
    }
};