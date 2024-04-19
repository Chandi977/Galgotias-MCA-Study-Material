#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin >> arr[i][j];
    
    vector<vector<int>> ans;
    int count = 0;
    int total = n * m;
    
    int startingn = 0;
    int startingm = 0;
    int endingn = n - 1;
    int endingm = m - 1;
    
    while(count < total) {
        vector<int> row;
        for(int index = startingm; count < total && index <= endingm; index++) {
            row.push_back(arr[startingn][index]);
            count++;
        }
        startingn++;
        
        for(int index = startingn; count < total && index <= endingn; index++) {
            row.push_back(arr[index][endingm]);
            count++;
        }
        endingm--;
        
        for(int index = endingm; count < total && index >= startingm; index--) {
            row.push_back(arr[endingn][index]);
            count++;
        }
        endingn--;
        
        for(int index = endingn; count < total && index >= startingn; index--) {
            row.push_back(arr[index][startingm]);
            count++;
        }
        startingm++;
        
        ans.push_back(row);
    } 
    // Print original array
    cout << "Original Array:" << endl;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    // Print spiral order traversal
    cout << "Spiral Order Traversal:" << endl;
    for(int i = 0; i < ans.size(); i++) {
        for(int j = 0; j < ans[i].size(); j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
