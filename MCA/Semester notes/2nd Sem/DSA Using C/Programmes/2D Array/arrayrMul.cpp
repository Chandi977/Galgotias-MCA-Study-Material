#include <bits/stdc++.h>
using namespace std;
// Program to show Matrics Multiplication 
int main() {
    int n, m, o, p;
    cout << "Enter Row of Matrix 1: ";
    cin >> n;
    cout << "Enter Column of Matrix 1: ";
    cin >> m;

    cout << "Enter Row of Matrix 2: ";
    cin >> o;
    cout << "Enter Column of Matrix 2: ";
    cin >> p;

    if (m == o) {
        int arr1[n][m], arr2[o][p], arr3[10][10] = {0};
        cout << "Enter elements of Matrix 1:" << endl;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> arr1[i][j];
            }
        }
        cout << "Enter elements of Matrix 2:" << endl;
        for (int i = 0; i < o; i++) {
            for (int j = 0; j < p; j++) {
                cin >> arr2[i][j];
            }
        }
        // Matrix Multiplication
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < p; j++) {
                for (int k = 0; k < o; k++) {
                    arr3[i][j] += arr1[i][k] * arr2[k][j];
                }
            }
        }
        cout << "\nMultiplication of Two Matrices:" << endl;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < p; j++) {
                cout << arr3[i][j] << " ";
            }
            cout << endl;
        }
    } else {
        cout << "Matrix multiplication is not possible." << endl;
    }
    return 0;
}
