#include <iostream>
#include <vector>

using namespace std;

bool ispossible(vector<int> &boards, int k, int n, long long int mid){
    long long int days=0;
    long long int painter=1;
    for(int i=0;i<n;i++){
        if(days+boards[i]<=mid){
            days+=boards[i];
        }
        else{
            painter++;
            if(painter>k || boards[i]>mid){
                return false;
            }
            days= boards[i];
        }
    }
    return true;
}

int findLargestMinDistance(vector<int> &boards, int k){
    long long int s=0;
    long long int sum=0;
    long long int n= boards.size();
    for(int i=0;i<n;i++){
        sum+=boards[i];
    }
    long long int e=sum;
    long long int ans=-1;
    while(s<=e){
        long long int mid=s +(e-s)/2;
        if(ispossible(boards,k,n,mid)){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return ans;
}

int main() {
    vector<int> boards = {3, 6, 2, 7, 5};
    int k = 3;
    int result = findLargestMinDistance(boards, k);
    cout << "Largest minimum distance: " << result << endl;
    return 0;
}
