#include <string>

class Solution {
public:
    int strStr(std::string haystack, std::string needle) {
        for (int i = 0; i < haystack.size(); ++i) {
            if (haystack.at(i) == needle.at(0)) {
                bool found = false;
                for (int j = 0; i + j < haystack.size() && j < needle.size(); ++j) {
                    if (haystack.at(i + j) != needle.at(j)) {
                        break;
                    } else if (j == needle.size() - 1) {
                        found = true;
                    }
                }

                if (found) {
                    return i;
                }
            }
        }

        return -1;
    }
};
