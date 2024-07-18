#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";
        string prefix = strs[0];
        for (string s : strs)
            while (s.find(prefix) != 0)
                prefix = prefix.substr(0, prefix.length() - 1);
        return prefix;
    }
};

int main() {
    // Create an instance of the Solution class
    Solution solution;

    // Example 1
    vector<string> strs1 = {"flower", "flow", "flight"};
    cout << "Example 1 Output: " << solution.longestCommonPrefix(strs1) << endl;

    // Example 2
    vector<string> strs2 = {"dog", "racecar", "car"};
    cout << "Example 2 Output: " << solution.longestCommonPrefix(strs2) << endl;

    return 0;
}
