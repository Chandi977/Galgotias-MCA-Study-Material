#include<bits/stdc++.h>
using namespace std;

// Bruetforce Approach
bool isPrime(int n){
    if(n <= 1) { 
        return false;
    }
    for(int i = 2; i < n; i++) {
        if(n % i == 0) {
            return false;
        }
    }
    return true;
}

// sieve of Eratosthenes Approach
int countPrimes(int n){
    vector<bool> prime(n+1,true);
    prime[0] = prime[1] = false;
    for(int i = 2; i < n; i++){
        if(prime[i]){
            cnt++;
            for(int j = 2*i; j<n; j = j+i){
                prime[j] = 0;
            }
        }
    }
    return cnt;
}


int main(){
    int num;
    cout << "Enter a Number: ";
    cin >> num;
    if(isPrime(num)) {
        cout << "It is a Prime number" << endl;
    } else {
        cout << "It is not a Prime Number" << endl;
    }
    return 0;
}
