class Solution {
  public:
    std::vector<int> twoSum(std::vector<int> &nums, int target) {
        std::unordered_map<int, int> hmap;

        for (int i = 0; i < nums.size(); ++i) {
            int diff = target - nums[i];

            if (hmap.find(diff) != hmap.end()) {
                return {hmap[diff], i};
            } else {
                hmap[nums[i]] = i;
            }
        }

        return {-1, -1};
    }
};
