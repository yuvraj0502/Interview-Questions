class Solution {
public:
    string longestPrefix(string s) {
        int i = 1;
        int length = 0;
        int n = s.length();
        vector<int> lps(n, 0);

        while (i < n) {
            if (s[i] == s[length]) {
                length++;
                lps[i] = length;
                i++;
            } else {
                if (length != 0) {
                    length = lps[length - 1];
                } else {
                    lps[i] = 0;
                    i++;
                }
            }
        }
        return s.substr(0, lps[n - 1]);
    }
};