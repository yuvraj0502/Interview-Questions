class Solution {
public:
    vector<string> stringMatching(vector<string>& word) {
        vector<string> result;
        int n = word.size();

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i != j && word[j].find(word[i]) != string::npos) {
                    result.push_back(word[i]);
                    break;
                }
            }
        }
        return result;
    }
};