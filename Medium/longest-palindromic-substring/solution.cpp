#include <string>

class Solution {
public:
    std::string longestPalindrome(std::string line) {
        if (line.size() < 2) {
            return line;
        } else {
            int size = 0, start = 0, left = 0, right = 0, middle = 0;
            while (middle < line.size()) {
                left = middle, right = middle;
                while (right < line.size() - 1 &&
                       line[right] == line[right + 1]) {
                    ++right;
                }

                middle = right + 1;
                while (right < line.size() - 1 && left > 0 &&
                       line[right + 1] == line[left - 1]) {
                    --left;
                    ++right;
                }

                if (right - left + 1 > size) {
                    start = left;
                    size = right - left + 1;
                }
            }

            return line.substr(start, size);
        }
    }
};
