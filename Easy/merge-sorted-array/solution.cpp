class Solution {
  public:
    void merge(std::vector<int> &nums1, int m, std::vector<int> &nums2, int n) {
        for (int i = 0; i < n; ++i) {
            nums1[m + i] = nums2[i];
        }

        std::sort(nums1.begin(), nums1.end());
    }
};
