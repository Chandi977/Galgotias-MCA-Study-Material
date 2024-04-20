#include <bits/stdc++.h>

using namespace std;

// use of Specific k window size
int maxSumOfSubarrayOfSizeK(vector<int>& nums, int k) {
    int maxSum = 0;
    int currentSum = 0;

    for (int i = 0; i < k; ++i) {
        maxSum += nums[i];
    }
    currentSum = maxSum;

    for (int i = k; i < nums.size(); ++i) {
        currentSum = currentSum - nums[i - k] + nums[i];
        maxSum = max(maxSum, currentSum);
    }

    return maxSum;
}

int minSumOfSubarrayOfSizeK(vector<int>& nums, int k) {
    int minSum = 0;
    int currentSum = 0;

    for (int i = 0; i < k; ++i) {
        minSum += nums[i];
    }
    currentSum = minSum;

    for (int i = k; i < nums.size(); ++i) {
        currentSum = currentSum - nums[i - k] + nums[i];
        minSum = min(minSum, currentSum);
    }

    return minSum;
}


//Basic Kadane's Algorithm
int kadaneAlgorithm(vector<int>& nums) {
    int maxSum = nums[0];
    int currentSum = nums[0];

    for (int i = 1; i < nums.size(); ++i) {
        currentSum = max(nums[i], currentSum + nums[i]);
        maxSum = max(maxSum, currentSum);
    }

    return maxSum;
}
int main() {
    vector<int> nums = {1, -8, 2, 1, 4};
    int k;
    cin>>k;
    cout << "Maximum sum of subarray: " << kadaneAlgorithm(nums) <<endl;
    cout << "Maximum sum k window : " <<maxSumOfSubarrayOfSizeK(nums , 3)<<endl;
    cout << "Minimum sum k window : " <<minSumOfSubarrayOfSizeK(nums , 3)<<endl;
    return 0;
}