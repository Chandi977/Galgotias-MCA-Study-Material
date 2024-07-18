#include <iostream>
using namespace std;
// void printSum(int arr[1000][1000],int row, int col){
    
    
// }

int main(){
    int n,m;
    cin>>n>>m;
    int arr1[n][m];

    //first array insertion
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin>>arr1[i][j];

    // Second Array insertion
    // for(int i = 0; i < n; i++)
    //     for(int j = 0; j < m; j++)
    //         cin>>arr2[i][j];
    
    // printing Both array
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }
    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < m; j++){
    //         cout<<arr2[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    // Row Wise sum
    cout<<"For Row wise addition"<<endl;
    for(int row = 0; row < n; row++){
        int sum = 0;
        for(int col = 0; col < m; col++){
            sum += arr1[row][col];
        }
        cout<<sum<<endl;
    }
    cout<<"\nFor Column Wise addition \n"<<endl;
    for(int row = 0; row < n; row++){
        int sum = 0;
        for(int col = 0; col < m; col++){
            sum += arr1[col][row];
        }
        cout<<sum<<endl;
    }
    return 0;
}