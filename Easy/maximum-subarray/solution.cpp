class Solution {
  public:
    int maxSubArray(std::vector<int> &nums) {
        int max = INT32_MIN;
        int tmax = 0;
        for (int i = 0; i < nums.size(); ++i) {
            tmax = tmax + nums[i];
            if (max < tmax)
                max = tmax;
            if (tmax < 0)
                tmax = 0;
        }
        return max;
    }
};
