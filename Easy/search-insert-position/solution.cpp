#include <vector>

class Solution {
public:
    int searchInsert(std::vector<int> &nums, int target) {
        int l = 0;
        int h = nums.size() - 1;

        int m = l + (h - l) / 2;
        while (l <= h) {
            if (nums.at(m) == target) {
                break;
            } else if (nums.at(m) < target) {
                l = m + 1;
            } else {
                h = m - 1;
            }

            m = l + (h - l) / 2;
        }

        return m;
    }
};
