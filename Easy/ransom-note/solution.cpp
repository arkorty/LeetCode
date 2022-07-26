#include <string>
#include <unordered_map>

class Solution {
  public:
    bool canConstruct(std::string ransomNote, std::string magazine) {
        std::unordered_map<char, int> hmap[2];

        for (int i = 0; i < magazine.size(); ++i) {
            ++hmap[0][magazine[i]];
        }

        for (int i = 0; i < ransomNote.size(); ++i) {
            if (hmap[0][ransomNote[i]] < ++hmap[1][ransomNote[i]]) {
                return false;
            }
        }

        return true;
    }
};
