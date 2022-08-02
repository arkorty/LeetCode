#include <vector>

class Solution {
private:
    bool binarySearch(std::vector<int> &nums, int start, int end, int target) {
        while (end >= start) {
            int middle = start + (end - start) / 2;

            if (nums[middle] == target) {
                return true;
            } else if (nums[middle] > target) {
                end = middle - 1;
            } else {
                start = middle + 1;
            }
        }

        return false;
    }

    /*
    bool binarySearch(std::vector<int> &nums, int start, int end, int target) {
        if (end >= start) {
            int middle = start + (end - start) / 2;

            if (nums[middle] == target) {
                return true;
            } else if (nums[middle] > target) {
                return binarySearch(nums, start, middle - 1, target);
            } else {
                return binarySearch(nums, middle + 1, end, target);
            }
        }

        return false;
    }
    */

public:
    bool searchMatrix(std::vector<std::vector<int>> &matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();
        for (int i = 0; i < row; ++i) {
            if (target > matrix[i][col - 1]) {
                continue;
            } else {
                return binarySearch(matrix[i], 0, col - 1, target);
            }
        }

        return false;
    }
};
