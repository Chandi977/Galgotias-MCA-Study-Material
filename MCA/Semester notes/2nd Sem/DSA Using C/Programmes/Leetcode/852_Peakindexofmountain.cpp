#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int s = 0;
        int e = arr.size() - 1;
        int mid = s + (e - s) / 2;
        while(s < e){
            if(arr[mid] < arr[mid+1]){
                s = mid + 1;
            }else{
                e = mid;
            }
            mid = s + (e - s) / 2;
        }
        return s;
    }
};

int main() {
    Solution solution;
    vector<int> arr1 = {0, 1, 0};
    vector<int> arr2 = {0, 2, 1, 0};
    vector<int> arr3 = {0, 10, 5, 2};

    cout << "Peak index in arr1: " << solution.peakIndexInMountainArray(arr1) << endl;
    cout << "Peak index in arr2: " << solution.peakIndexInMountainArray(arr2) << endl;
    cout << "Peak index in arr3: " << solution.peakIndexInMountainArray(arr3) << endl;

    return 0;
}
