#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> twoSum(vector<int>& arr, int target) {
    unordered_map<int, int> m;
    vector<pair<int, int>> ans;
    
    for (int num : arr) {
        int complement = target - num;
        if (m.find(complement) != m.end()) {
            ans.push_back({num, complement});
            // We decrement the count of complement to avoid duplicate pairs
            m[complement]--;
            if (m[complement] == 0) {
                m.erase(complement);
            }
        } else {
            m[num]++;
        }
    }
    
    return ans.empty() ? vector<pair<int, int>>(1, {-1, -1}) : ans;
}

int main() {
    vector<int> arr = {2, 7, 11, 15, 6, 3, 9};
    int target = 9;
    
    vector<pair<int, int>> result = twoSum(arr, target);
    
    for (const auto& pair : result) {
        cout << pair.first << " + " << pair.second << " = " << target << endl;
    }
    
    return 0;
}
