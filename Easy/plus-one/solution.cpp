#include <vector>

class Solution {
public:
    std::vector<int> plusOne(std::vector<int> &digits) {
        ++digits[digits.size() - 1];
        for (int i = digits.size() - 1; i >= 0 && digits[i] == 10; --i) {
            digits[i] = 0;
            if (i != 0) {
                ++digits[i - 1];
            } else {
                digits.insert(digits.begin(), 1);
            }
        }

        return digits;
    }
};
