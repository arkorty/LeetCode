#include <vector>

class Solution {
public:
    int climbStairs(int n) {
        if (n == 0) {
            return 0;
        }

        std::vector<int> shiftTwoFibo{1, 2};
        for (int i = 2; i < n; ++i) {
            shiftTwoFibo.push_back(shiftTwoFibo[i - 1] + shiftTwoFibo[i - 2]);
        }

        return shiftTwoFibo[n - 1];
    }
};
