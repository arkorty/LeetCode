#include <vector>

class Solution {
public:
    std::vector<std::vector<int>>
    matrixReshape(std::vector<std::vector<int>> &mat, int r, int c) {
        int m = mat.size(), n = mat[0].size();
        if (m * n == r * c) {
            std::vector<std::vector<int>> rslt(r, std::vector<int>(c));

            for (int i = 0, k = 0, l = 0; i < m; ++i) {
                for (int j = 0; j < n; ++j) {
                    rslt[k][l] = mat[i][j];

                    if (l < c) {
                        ++l;
                    }

                    if (l == c) {
                        l = 0;
                        ++k;
                    }
                }
            }

            return rslt;
        } else {
            return mat;
        }
    }
};
