#include <string>

class Solution {
public:
    bool repeatedSubstringPattern(std::string s) {
        for (int i = 1; i <= s.size() / 2; ++i) {
            std::string sl(s.substr(0, i));
            if (s.size() % i == 0) {
                bool found = false;
                for (int j = 1; j < s.size() / i; ++j) {
                    if (s.find(sl, sl.size() * j) == sl.size() * j) {
                        found = true;
                    } else {
                        found = false;
                        break;
                    }
                }

                if (found) {
                    return true;
                }
            }
        }

        return false;
    }
};
