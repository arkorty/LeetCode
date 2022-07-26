#include <array>
#include <string>

class Solution {
public:
    std::string addBinary(std::string a, std::string b) {
        std::string r("");
        bool c = 0;
        for (int i = a.size() - 1, j = b.size() - 1; i >= 0 || j >= 0; --i, --j) {
            bool d = i >= 0 ? a[i] == '1' : 0;
            bool e = j >= 0 ? b[j] == '1' : 0;

            r = ((bool)(d ^ e ^ c) ? '1' : '0') + r;
            c = (d & e) || (e & c) || (d & c);
        }

        if (c) {
            r = (c ? '1' : '0') + r;
        }

        return r;
    }
};
