class Solution {
public:
    bool containsDuplicate(std::vector<int> &nums) {
        std::unordered_set<int> unset;

        int size = nums.size();
        for (int i = 0; i < size; ++i) {
            int occur = unset.count(nums[i]);

            if (occur == 1) {
                return true;
            } else {
                unset.insert(nums[i]);
            }
        }

        return false;
    }
};
