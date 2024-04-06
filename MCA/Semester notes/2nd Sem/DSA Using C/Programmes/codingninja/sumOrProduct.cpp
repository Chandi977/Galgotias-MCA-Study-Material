#include <bits/stdc++.h> 

long long int sumOfN(long long int num) {
    long long int sum = (num * (num + 1)) / 2;
    return sum;
}

long long int productOf(long long int num) {
    const long long MOD = 1000000007;
    long long int product = 1;
    
    // Multiply each number from 1 to n
    for (int i = 1; i <= num; ++i) {
        product = (product * i) % MOD;
    }
    return product;
}

long long int sumOrProduct(long long int n, long long int q) {
    // Write your code here.
    if (q == 1) {
        return sumOfN(n);
    } else if (q == 2) {
        return productOf(n);
    }
}

int main() {
    long long int n, q;
    std::cout << "Enter the value of n and q: ";
    std::cin >> n >> q;
    
    long long int result = sumOrProduct(n, q);
    
    std::cout << "Result: " << result << std::endl;
    
    return 0;
}
