class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        int minValue = arrays[0][0];
        int maxValue = arrays[0].back();
        int max_Distance = 0;
        for (int i = 1; i < arrays.size(); i++) {
            max_Distance = max(max_Distance, abs(maxValue - arrays[i][0]));
            max_Distance = max(max_Distance, abs(arrays[i].back() - minValue));
            minValue = min(minValue, arrays[i][0]);
            maxValue = max(maxValue, arrays[i].back());
        }
        return max_Distance;
    }
};