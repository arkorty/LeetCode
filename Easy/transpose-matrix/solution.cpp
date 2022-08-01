#include <vector>

class Solution {
public:
    std::vector<std::vector<int>> transpose(std::vector<std::vector<int>> &matrix) {
        std::vector<std::vector<int>> trans(matrix[0].size(), std::vector<int>(matrix.size()));

        for (int i = 0; i < matrix.size(); ++i) {
            for (int j = 0; j < matrix[0].size(); ++j) {
                trans[j][i] = matrix[i][j];
            }
        }

        return trans;
    }
};
