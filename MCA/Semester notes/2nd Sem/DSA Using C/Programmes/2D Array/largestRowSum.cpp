#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int arr1[n][m];
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin>>arr1[i][j];

    int maxi = INT_MIN;
    int rowIndex = -1;
    for(int row = 0; row < n; row++){
        int sum = 0;
        
        for(int col = 0; col < m; col++){
            sum += arr1[row][col];
        }
        if(sum > maxi){
            maxi = sum;
            rowIndex = row;
        }
    }
    cout<<"The Maximun sum is : "<<maxi << " and Row is :"<<rowIndex<<endl;
}