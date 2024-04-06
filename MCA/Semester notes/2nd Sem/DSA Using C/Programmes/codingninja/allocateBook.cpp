#include <iostream>
#include <vector>

using namespace std;

bool ispossible(vector<int> arr, int n, int m, int mid) {
    int studentCount = 1;
    int pageSum = 0;
    for (int i = 0; i < n; i++) {
        if (pageSum + arr[i] <= mid) {
            pageSum += arr[i];
        } else {
            studentCount++;
            if (studentCount > m || arr[i] > mid) {
                return false;
            }
            pageSum = arr[i];
        }
    }
    return true;
}

int allocateBooks(vector<int> arr, int n, int m) {
    int ans = -1;
    if (n >= m) { //correction of love babbar
        int s = 0;
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += arr[i];
        }
        int e = sum;

        int mid = s + (e - s) / 2;
        while (s <= e) {
            if (ispossible(arr, n, m, mid)) {
                ans = mid;
                e = mid - 1;
            } else {
                s = mid + 1;
            }
            mid = s + (e - s) / 2;
        }
    } else {
        return -1;
    }
    return ans;
}

int main() {
    vector<int> books = {10,20,30,40};
    int n = books.size(); // Number of books
    int m = 2; // Number of students

    int minPages = allocateBooks(books, n, m);
    if (minPages != -1) {
        cout << "Minimum number of pages each student should read: " << minPages << endl;
    } else {
        cout << "It is not possible to allocate books to students in a fair manner." << endl;
    }

    return 0;
}
