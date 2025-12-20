class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int firstLarge = INT_MAX;
        int secondLarge = INT_MAX;

        for (int i : nums) {
            if (i <= firstLarge) {
                firstLarge = i;
            } else if (i <= secondLarge) {
                secondLarge = i;
            } else {
                return true;
            }
        }
        return false;
    }
};