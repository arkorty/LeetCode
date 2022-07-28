class Solution {
    char[][] Board;

    boolean isValid(int row, int col, char num) {
        for (int i = 0; i < 9; i++) {
            if (Board[i][col] == num) {
                return false;
            }

            if (Board[row][i] == num) {
                return false;
            }
        }

        row = row - row % 3;
        col = col - col % 3;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (Board[i + row][j + col] == num) {
                    return false;
                }
            }
        }

        return true;
    }

    int[] nextEmpty() {
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if (Board[i][j] == '.') {
                    return new int[] { i, j };
                }
            }
        }

        return new int[] { -1, -1 };
    }

    boolean solver() {
        int[] tmp = nextEmpty();
        if (tmp[0] == -1) {
            return true;
        }

        int row = tmp[0];
        int col = tmp[1];

        for (int i = 1; i <= 9; i++) {
            if (isValid(row, col, (char) (48 + i))) {
                Board[row][col] = (char) (48 + i);

                if (solver()) {
                    return true;
                }
            }

            Board[row][col] = '.';
        }

        return false;
    }

    public void solveSudoku(char[][] board) {
        Board = board;
        solver();
    }
}
