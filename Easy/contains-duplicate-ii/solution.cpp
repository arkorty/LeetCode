#include <cmath>
#include <unordered_map>
#include <vector>

class Solution {
public:
    bool containsDuplicate(std::vector<int> &nums, int k) {
        std::unordered_map<int, std::vector<int>> unset;

        int size = nums.size();
        for (int i = 0; i < size; ++i) {
            if (unset.find(nums[i]) != unset.end()) {
                std::vector<int> indices = unset[nums[i]];

                for (int j = 0; j < indices.size(); ++j) {
                    if (std::abs(indices[j] - i) <= k) {
                        return true;
                    }
                }
            }

            unset[nums[i]].push_back(i);
        }

        return false;
    }
};
