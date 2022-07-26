#include <vector>

class Solution {
public:
    int equalPairs(std::vector<std::vector<int>> &grid) {
        int count = 0;
        for (int i = 0; i < grid.size(); ++i) {
            for (int j = 0; j < grid.size(); ++j) {
                bool match = true;
                for (int k = 0; k < grid.size(); ++k) {
                    if (grid[i][k] != grid[k][j]) {
                        match = false;
                        break;
                    }
                }

                if (match) {
                    ++count;
                }
            }
        }

        return count;
    }
};
