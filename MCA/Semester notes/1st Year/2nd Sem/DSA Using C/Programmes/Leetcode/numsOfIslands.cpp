#include <iostream>
#include <vector>
#include <functional>
using namespace std;

class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        if(grid.empty() || grid[0].empty())
            return 0;
        
        int rows = grid.size();
        int cols = grid[0].size();
        int islands = 0;
        
        function<void(int, int)> dfs = [&](int row, int col) {
            if(row < 0 || col < 0 || row >= rows || col >= cols || grid[row][col] != '1')
                return;
            grid[row][col] = '0';
            dfs(row - 1, col);
            dfs(row + 1, col);
            dfs(row, col - 1);
            dfs(row, col + 1);
        };
        
        for(int row = 0; row < rows; row++) {
            for(int col = 0; col < cols; col++) {
                if(grid[row][col] == '1') {
                    dfs(row, col);
                    islands++;
                }
            }
        }
        
        return islands;
    }
};

int main() {
    // Test case for numIslands
    vector<vector<char>> grid = {
        {'1', '1', '0', '0', '0'},
        {'1', '1', '0', '0', '0'},
        {'0', '0', '1', '0', '0'},
        {'0', '0', '0', '1', '1'}
    };

    Solution solution;
    int numIslands = solution.numIslands(grid);
    cout << "Number of islands: " << numIslands << endl;

    return 0;
}
