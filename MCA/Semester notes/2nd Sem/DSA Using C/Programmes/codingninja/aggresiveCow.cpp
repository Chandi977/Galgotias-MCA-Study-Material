#include<bits/stdc++.h>
using namespace std;
bool isPossible(vector<int> &stalls, int k, int mid){
    int cowCount = 1;
    int lastPos = stalls[0];
    for (int i = 1; i < stalls.size(); i++){
        if(stalls[i]-lastPos >= mid){
            cowCount++;
            if(cowCount == k){
                return true;
            }
            lastPos = stalls[i];
        }
    }
    return false;
}
int aggressiveCows(vector<int> &stalls, int k){
    sort(stalls.begin(),stalls.end());
    int s = 0;
    int maxi = -1;
    for (int i = 0; i< stalls.size(); i++){
        maxi = max(maxi, stalls[i]);
    }
    int e = maxi;
    int ans = -1;
    int mid = s + (e-s)/2;
    while(s<=e){
        if(isPossible(stalls, k, mid)){
            ans = mid;
            s = mid + 1;
        }else{
            e = mid - 1;
        }
        mid = s +(e-s)/2;
    }
    return ans;
}

int main(){
    vector<int> stalls = {1, 2, 4, 8, 9};
    int k = 3; // Number of cows
    cout << "Maximum possible distance: " << aggressiveCows(stalls, k) << endl;
    return 0;
}