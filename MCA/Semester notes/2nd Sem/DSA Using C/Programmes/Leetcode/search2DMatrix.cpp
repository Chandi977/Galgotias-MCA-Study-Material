#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();
        
        int rowIndex = 0;
        int colIndex = col-1;
        
        while(rowIndex < row && colIndex >= 0) {
            int element = matrix[rowIndex][colIndex];
            
            if(element == target) {
                return true;
            }
            
            if(element < target){
                rowIndex++;
            }
            else
            {
                colIndex--;
            }
        }
        return false;
    }
};

int main() {
    Solution solution;
    vector<vector<int>> matrix = {
        {1, 4, 7, 11},
        {2, 5, 8, 12},
        {3, 6, 9, 16},
        {10, 13, 14, 17},
        {18, 21, 23, 26}
    };
    int target = 5;
    bool found = solution.searchMatrix(matrix, target);
    if (found) {
        cout << "Element " << target << " found in the matrix." << endl;
    } else {
        cout << "Element " << target << " not found in the matrix." << endl;
    }
    return 0;
}
