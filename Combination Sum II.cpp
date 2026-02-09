class Solution {
public:
    vector<vector<int>> result;
    void helper(vector<int>& currentSum, int target, int sum,
                vector<int>& candidates, int currentIndex, int n) {
        if (target == sum) {
            result.push_back(currentSum);
            return;
        }
        if (sum > target) {
            return;
        }
        for (int i = currentIndex; i < n; i++) {
            if (i != currentIndex && candidates[i] == candidates[i - 1]) {
                continue;
            }
            sum += candidates[i];
            currentSum.push_back(candidates[i]);
            helper(currentSum, target, sum, candidates, i + 1, n);
            sum -= candidates[i];
            currentSum.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int> currentSum;
        int n = candidates.size();
        sort(candidates.begin(), candidates.end());
        helper(currentSum, target, 0, candidates, 0, n);
        return result;
    }
};