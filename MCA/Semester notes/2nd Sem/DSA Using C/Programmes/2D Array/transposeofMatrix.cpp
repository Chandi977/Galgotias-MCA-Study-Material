#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cout<<"Enter Row of Matrix : ";
    cin>>n;
    cout<<"Enter Column of Matrix : ";
    cin>>m;


    int arr[n][m],out[n][m] = {0};

    cout << "Enter elements of Matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            out[i][j] = arr[j][i];
        }
    }

    cout<<"Entered Matrix Elements : "<<endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"Transpose of Matrix :"<<endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << out[i][j]<<" ";
        }
        cout<<endl;
    }
}