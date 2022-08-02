#include <string>
#include <unordered_map>

class Solution {
public:
    bool isAnagram(std::string s, std::string t) {
        if (s.size() == t.size()) {
            std::unordered_map<char, int> hmap[2];
            for (int i = 0; i < s.size(); ++i) {
                ++hmap[0][s[i]];
                ++hmap[1][t[i]];
            }

            for (int i = (int)'a'; i <= (int)'z'; ++i) {
                if (hmap[0][(char)i] != hmap[1][(char)i]) {
                    return false;
                }
            }

            return true;
        }

        return false;
    }
};
