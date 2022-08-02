#include <iostream>
#include <vector>

class Solution {
public:
    int maxArea(std::vector<int> &height) {
        int left = 0;
        int right = height.size() - 1;
        int maxArea = 0;
        int curArea = 0;
        while (left < right) {
            curArea =
                (right - left) *
                (height[left] < height[right] ? height[left] : height[right]);
            maxArea = maxArea > curArea ? maxArea : curArea;

            if (height[left] > height[right]) {
                --right;
            } else {
                ++left;
            }
        }

        return maxArea;
    }
};
