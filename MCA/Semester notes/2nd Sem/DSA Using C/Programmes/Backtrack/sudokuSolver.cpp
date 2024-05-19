#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void solveSudoku(vector<vector<char>>& board) {
        solve(board, 0);
    }

private:
    bool solve(vector<vector<char>>& board, int s) {
        if (s == 81)
            return true;

        const int i = s / 9;
        const int j = s % 9;

        if (board[i][j] != '.')
            return solve(board, s + 1);

        for (char c = '1'; c <= '9'; ++c) {
            if (isValid(board, i, j, c)) {
                board[i][j] = c;
                if (solve(board, s + 1))
                    return true;
                board[i][j] = '.';
            }
        }

        return false;
    }

    bool isValid(vector<vector<char>>& board, int row, int col, char c) {
        for (int i = 0; i < 9; ++i) {
            if (board[i][col] == c || board[row][i] == c ||
                board[3 * (row / 3) + i / 3][3 * (col / 3) + i % 3] == c) {
                return false;
            }
        }
        return true;
    }
};

int main() {
    // Example Sudoku board
    vector<vector<char>> board = {
        {'5', '3', '.', '.', '7', '.', '.', '.', '.'},
        {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
        {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
        {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
        {'4', '.', '.', '8', '.', '3', '.', '.', '1'},
        {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
        {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
        {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
        {'.', '.', '.', '.', '8', '.', '.', '7', '9'}
    };

    Solution solver;
    solver.solveSudoku(board);

    // Output the solved Sudoku board
    for (const auto& row : board) {
        for (char cell : row) {
            cout << cell << " ";
        }
        cout << endl;
    }

    return 0;
}
