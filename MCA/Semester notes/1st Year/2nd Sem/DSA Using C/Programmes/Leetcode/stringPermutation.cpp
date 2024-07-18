#include <iostream>
using namespace std;

class Solution {
    bool checkEqual(int a[26], int b[26]) {
        for (int i = 0; i < 26; i++) {
            if (a[i] != b[i]) {
                return false;
            }
        }
        return true;
    }

public:
    bool checkInclusion(string s1, string s2) {
        int count1[26] = {0};
        for (char ch : s1) {
            count1[ch - 'a']++;
        }

        int windowSize = s1.length();
        int count2[26] = {0};

        // Initialize count2 for the first window
        for (int i = 0; i < windowSize && i < s2.length(); i++) {
            count2[s2[i] - 'a']++;
        }

        if (checkEqual(count1, count2)) {
            return true;
        }

        // Slide the window and update count2
        for (int i = windowSize; i < s2.length(); i++) {
            count2[s2[i] - 'a']++;
            count2[s2[i - windowSize] - 'a']--;

            if (checkEqual(count1, count2)) {
                return true;
            }
        }

        return false;
    }
};

int main() {
    Solution solution;
    string s1 = "ab";
    string s2 = "eidbaooo";
    cout << "Does s2 contain a permutation of s1? " << (solution.checkInclusion(s1, s2) ? "Yes" : "No") << endl;
    return 0;
}
