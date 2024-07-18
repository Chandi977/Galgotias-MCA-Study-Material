#include <iostream>
using namespace std;

class Solution {
public:
    string removeOccurrences(string s, string part) {
        while (s.length() != 0 && s.find(part) < s.length()) {
            s.erase(s.find(part), part.length());
        }
        return s;
    }
};

int main() {
    Solution solution;
    string s = "daabcbaabcbc";
    string part = "abc";
    cout << "After removing occurrences of '" << part << "' from '" << s << "': " << solution.removeOccurrences(s, part) << endl;
    return 0;
}
