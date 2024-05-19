#include <iostream>
#include <vector>

using namespace std;

bool binarySearch(vector<vector<int>>& v, int target){
    int row = v.size();
    int col = v[0].size();

    int start = 0;
    int end = row * col - 1;

    int mid = start + (end - start)/2;
    while(start<=end){
        int element = v[mid/col][mid%col];

        if(element == target){
            return true;
        }else if(element < target){
            start = mid + 1;
        }else{
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    return false;
}

int main() {
    vector<vector<int>> matrix;
    int rows, cols;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    matrix.resize(rows, vector<int>(cols));

    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << "Enter element [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }
    int target;
    cout<<"Enter element to find in matrix : "<<endl;
    cin>>target;
    if(binarySearch(matrix,target)){
        cout<<"Element Found"<<endl;
    }else{
        cout<<"Element Not Found"<<endl;
    }
    cout << "The matrix you entered is:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
