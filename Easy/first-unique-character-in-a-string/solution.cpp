#include <string>
#include <unordered_set>

class Solution {
public:
    /*
    int firstUniqChar(std::string line) {
        std::unordered_map<char, int[2]> hmap;

        for (int i = 0; i < line.size(); ++i) {
            hmap[line[i]][0] = i;
            ++hmap[line[i]][1];
        }

        int result = INT32_MAX;
        for (int i = (int)'a'; i <= (int)'z'; ++i) {
            if (hmap[(char)i][1] == 1 && hmap[(char)i][0] == 0) {
                return 0;
            } else if (hmap[(char)i][1] == 1 && hmap[(char)i][0] < result) {
                result = hmap[(char)i][0];
            }
        }

        return result != INT32_MAX ? result : -1;
    }
    */

    int firstUniqChar(std::string line) {
        std::unordered_set<char> hmap;

        int index = 0;
        while (index < line.size()) {
            char letter = line[index];

            if (hmap.find(letter) == hmap.end() &&
                line.find(letter, index + 1) == -1) {
                return index;
            } else if (line.find(letter, index + 1) != -1) {
                index = line.find_first_not_of(letter, index + 1);
                hmap.insert(letter);
            } else {
                ++index;
            }
        }

        return -1;
    }
};
