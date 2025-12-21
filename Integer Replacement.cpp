class Solution {
public:
    int integerReplacement(int n) {
        long long number = n;
        int count = 0;
        while (number != 1) {
            if (number % 2 == 0) {
                number /= 2;
            } else {
                if (number == 3 || (number & 3) == 1) {
                    number--;
                } else {
                    number++;
                }
            }
            count++;
        }
        return count;
    }
};