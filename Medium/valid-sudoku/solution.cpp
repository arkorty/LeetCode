#include <iostream>
#include <unordered_map>
#include <vector>

class Solution {
  public:
    /*
    bool isValidSudoku(std::vector<std::vector<char>> &board) {
        for (int r = 0; r < 9; ++r) {
            for (int c = 0; c < 9; ++c) {
                char num = board[r][c];
                if (num != '.') {
                    int count = 0;
                    for (int i = 0; i < 9; ++i) {
                        if (num == board[r][i]) {
                            ++count;
                        }
                        if (num == board[i][c]) {
                            ++count;
                        }
                    }

                    int rof = r - r % 3;
                    int cof = c - c % 3;
                    for (int i = 0; i < 3; ++i) {
                        for (int j = 0; j < 3; ++j) {
                            if (num == board[i + rof][j + cof]) {
                                ++count;
                            }
                        }
                    }

                    if (count != 3) {
                        return false;
                    }
                }
            }
        }

        return true;
    }
    */

    bool isValidSudoku(std::vector<std::vector<char>> &board) {
        std::unordered_map<char, int[9]> count[3];

        for (int i = 0; i < 9; ++i) {
            for (int j = 0; j < 9; ++j) {
                char num = board[i][j];

                if (num != '.') {
                    if (count[0][num][i] != 0 || count[1][num][j] != 0 ||
                        count[2][num][i / 3 * 3 + j / 3] != 0) {
                        return false;
                    }

                    ++count[0][num][i];
                    ++count[1][num][j];
                    ++count[2][num][i / 3 * 3 + j / 3];
                }
            }
        }

        return true;
    }
};
