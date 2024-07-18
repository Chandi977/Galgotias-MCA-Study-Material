//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
private:
    bool isSafe(int x, int y, int n, vector<vector<int>>& visited, vector<vector<int>>& m) {
        if (x >= 0 && x < n && y >= 0 && y < n && visited[x][y] == 0 && m[x][y] == 1) {
            return true;
        }
        return false;
    }

    void solve(vector<vector<int>>& m, int n, vector<string>& ans, int x, int y, vector<vector<int>>& visited, string path) {
        if (x == n - 1 && y == n - 1) {
            ans.push_back(path);
            return;
        }

        // Mark current cell as visited
        visited[x][y] = 1;

        // 4 Sides to go Left,Right,Up,Down

        // down Side possibility
        int newx = x + 1;
        int newy = y;
        if (isSafe(newx, newy, n, visited, m)) {
            path.push_back('D');
            solve(m, n, ans, newx, newy, visited, path);
            path.pop_back();
        }

        // Left side Possibility
        newx = x;
        newy = y - 1;
        if (isSafe(newx, newy, n, visited, m)) {
            path.push_back('L');
            solve(m, n, ans, newx, newy, visited, path);
            path.pop_back();
        }

        // right side Possibility
        newx = x;
        newy = y + 1;
        if (isSafe(newx, newy, n, visited, m)) {
            path.push_back('R');
            solve(m, n, ans, newx, newy, visited, path);
            path.pop_back();
        }

        // Up side Possibility
        newx = x - 1;
        newy = y;
        if (isSafe(newx, newy, n, visited, m)) {
            path.push_back('U');
            solve(m, n, ans, newx, newy, visited, path);
            path.pop_back();
        }

        // Unmark current cell before returning
        visited[x][y] = 0;
    }

public:
    vector<string> findPath(vector<vector<int>>& m, int n) {
        vector<string> ans;

        if (m[0][0] == 0) return ans;

        vector<vector<int>> visited(n, vector<int>(n, 0));
        string path = "";
        solve(m, n, ans, 0, 0, visited, path);
        return ans;
    }
};


    


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends