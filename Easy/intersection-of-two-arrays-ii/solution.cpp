#include <algorithm>
#include <vector>

class Solution {
public:
    /*
    std::vector<int> intersect(std::vector<int> &nums1,
                               std::vector<int> &nums2) {
        std::unordered_map<int, int> hmap;
        std::vector<int> rslt;

        for (int i = 0; i < nums1.size(); ++i)
            ++hmap[nums1[i]];

        for (int i = 0; i < nums2.size(); ++i)
            if (hmap[nums2[i]] > 0) {
                --hmap[nums2[i]];
                rslt.push_back(nums2[i]);
            }

        return rslt;
    }
    */

    std::vector<int> intersect(std::vector<int> &nums1,
                               std::vector<int> &nums2) {
        std::sort(nums1.begin(), nums1.end());
        std::sort(nums2.begin(), nums2.end());
        std::vector<int> rslt;

        int i = 0, j = 0;
        while (i < nums1.size() && j < nums2.size()) {
            if (nums1[i] == nums2[j]) {
                rslt.push_back(nums1[i]);
                ++i;
                ++j;
            } else if (nums1[i] < nums2[j]) {
                ++i;
            } else if (nums1[i] > nums2[j]) {
                ++j;
            }
        }

        return rslt;
    }
};
