#include <string>
#include <vector>

class Solution {
public:
    std::vector<std::string> letterCombinations(std::string digits) {
        std::string letters[] = {"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        std::vector<std::string> finvec;
        if (digits.length() == 1) {
            std::string tmplet = letters[(int)digits[0] - 50];

            for (int i = 0; i < tmplet.length(); ++i) {
                finvec.push_back(std::string("") + tmplet[i]);
            }
        }

        else if (digits.length() == 2) {
            std::string tmplet_0 = letters[(int)digits[0] - 50];
            std::string tmplet_1 = letters[(int)digits[1] - 50];
            for (int i = 0; i < tmplet_0.length(); ++i) {
                for (int j = 0; j < tmplet_1.length(); ++j) {
                    finvec.push_back(std::string("") + tmplet_0[i] + tmplet_1[j]);
                }
            }
        }

        else if (digits.length() == 3) {
            std::string tmplet_0 = letters[(int)digits[0] - 50];
            std::string tmplet_1 = letters[(int)digits[1] - 50];
            std::string tmplet_2 = letters[(int)digits[2] - 50];
            for (int i = 0; i < tmplet_0.length(); ++i) {
                for (int j = 0; j < tmplet_1.length(); ++j) {
                    for (int k = 0; k < tmplet_2.length(); ++k) {
                        finvec.push_back(std::string("") + tmplet_0[i] + tmplet_1[j] + tmplet_2[k]);
                    }
                }
            }
        }

        else if (digits.length() == 4) {
            std::string tmplet_0 = letters[(int)digits[0] - 50];
            std::string tmplet_1 = letters[(int)digits[1] - 50];
            std::string tmplet_2 = letters[(int)digits[2] - 50];
            std::string tmplet_3 = letters[(int)digits[3] - 50];
            for (int i = 0; i < tmplet_0.length(); ++i) {
                for (int j = 0; j < tmplet_1.length(); ++j) {
                    for (int k = 0; k < tmplet_2.length(); ++k) {
                        for (int l = 0; l < tmplet_3.length(); ++l) {
                            finvec.push_back(std::string("") + tmplet_0[i] + tmplet_1[j] + tmplet_2[k] + tmplet_3[l]);
                        }
                    }
                }
            }
        }

        return finvec;
    }
};
