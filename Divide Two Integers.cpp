class Solution {
public:
    int divide(int dividend, int divisor) {
        if (dividend == divisor) {
            return 1;
        }
        if (dividend == INT_MIN && divisor == -1) {
            return INT_MAX;
        }
        if (divisor == 1) {
            return dividend;
        }
        int result = 0;
        result = dividend / divisor;
        return result;
    }
};