#include <iostream>
#include <unordered_set>
#include <vector>

class Solution {
public:
    int removeDuplicates(std::vector<int> &nums) {
        int k = 0, l = INT32_MIN;
        for (auto iter = nums.begin(); iter != nums.end(); iter.operator++()) {
            if (l != *iter) {
                nums[k++] = *iter;
                l = *iter;
            }
        }

        return k;
    }
};
