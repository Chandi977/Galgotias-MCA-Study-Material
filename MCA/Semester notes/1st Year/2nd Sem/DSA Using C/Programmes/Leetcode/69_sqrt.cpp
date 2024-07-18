/**
 * @brief 
69. Sqrt(x)
Solved
Easy
Topics
Companies
Hint
Given a non-negative integer x, return the square root of x rounded down to the nearest integer. The returned integer should be non-negative as well.

You must not use any built-in exponent function or operator.

For example, do not use pow(x, 0.5) in c++ or x ** 0.5 in python.
 

Example 1:

Input: x = 4
Output: 2
Explanation: The square root of 4 is 2, so we return 2.
Example 2:

Input: x = 8
Output: 2
Explanation: The square root of 8 is 2.82842..., and since we round it down to the nearest integer, 2 is returned.
 

Constraints:

0 <= x <= 231 - 1
 * 
 */


#include <stdio.h>
#include <iostream>

class Solution{
    public:
    int binarySearch(int n){
        int s = 0;
        int e = n;
        long long int mid = s + (e-s)/2;
        long long int ans = -1;
        while(s<=e){
            long long int square = mid * mid;
            if (square == n){
                return mid;
                /* code here */ 
            }else if (square < n) {
                ans = mid;
                s = mid + 1;
                /* code here */ 
            }else{
                e = mid - 1;
            }
            mid = s + (e-s)/2;
        }
        return ans;
    }
    int mySqrt(int x){
        return binarySearch(x);
    }
};


// to extracting floating value

int sqrtInteger(int n){
    int s = 0;
    int e = n;
    long long int mid = s + (e-s)/2;
    long long int ans = -1;
    while(s<=e){
        long long int square = mid * mid;
        if (square == n){
            return mid;
            /* code here */ 
        }else if (square < n) {
            ans = mid;
            s = mid + 1;
            /* code here */ 
        }else{
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

double morePrecision(int n, int precision,int tempSol){
    double factor = 1;
    double ans = tempSol;
    for (int i = 0; i <precision; i++){
        factor = factor / 10;

        for(double j = ans; j*j<n; j = j + factor){
            ans = j;
        }
    }
    return ans;
}
using namespace std;
int main(){
    int n;
    cout<<"Enter the number :"<<endl;
    cin>>n;
    int tempSol = sqrtInteger(n);
    cout<<"Answer is "<<morePrecision(n, 5, tempSol)<<endl;
}