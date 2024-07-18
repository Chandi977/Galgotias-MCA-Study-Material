#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int countPrimes(int n) {
        vector<bool> prime(n+1,true);
        int cnt = 0;
        prime[0] = prime[1] = false;
        for(int i = 2; i < n; i++){
            if(prime[i]){
                cnt++;
                for(int j = 2*i; j<n; j = j+i){
                    prime[j] = false;
                }
            }
        }
        return cnt;
    }
};

int main() {
    Solution solution;
    int n = 20; // Test with different values of n
    int count = solution.countPrimes(n);
    cout << "Number of primes less than " << n << ": " << count << endl;
    return 0;
}
