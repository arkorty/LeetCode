#include <string>
#include <vector>

class Solution {
public:
    std::string restoreString(std::string s, std::vector<int> &indices) {
        for (int i = 1; i < indices.size(); i++) {
            int itmp = indices[i];
            char ctmp = s[i];
            int j = i - 1;

            while (j >= 0 && indices[j] > itmp) {
                indices[j + 1] = indices[j];
                s[j + 1] = s[j];
                j = j - 1;
            }
            indices[j + 1] = itmp;
            s[j + 1] = ctmp;
        }

        return s;
    }
};
