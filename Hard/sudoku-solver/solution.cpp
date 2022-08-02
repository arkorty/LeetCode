#include <array>
#include <vector>

class Solution {
public:
    std::array<int, 2> nextEmpty(std::vector<std::vector<char>> &board) {
        for (int i = 0; i < 9; ++i) {
            for (int j = 0; j < 9; ++j) {
                if (board[i][j] == '.') {
                    return {i, j};
                }
            }
        }

        return {-1, -1};
    }

    bool valid(std::vector<std::vector<char>> &board, int row, int col,
               char dgt) {
        for (int i = 0; i < 9; ++i) {
            if (board[i][col] == dgt || board[row][i] == dgt) {
                return false;
            }
        }

        row = row - row % 3;
        col = col - col % 3;
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                if (board[i + row][j + col] == dgt) {
                    return false;
                }
            }
        }

        return true;
    }

    bool boardFiller(std::vector<std::vector<char>> &board) {
        std::array<int, 2> index = nextEmpty(board);

        if (index[0] == -1) {
            return true;
        }

        int row = index[0];
        int col = index[1];

        for (int i = 0; i < 9; ++i) {
            if (valid(board, row, col, (char)((int)'1' + i))) {
                board[row][col] = (char)((int)'1' + i);

                if (boardFiller(board)) {
                    return true;
                }
            }

            board[row][col] = '.';
        }

        return false;
    }

    void solveSudoku(std::vector<std::vector<char>> &board) {
        boardFiller(board);
    }
};
