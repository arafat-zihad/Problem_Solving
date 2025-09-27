#include <bits/stdc++.h>
using namespace std;
int main(){
    // 1 2
    // 3 4

    // int arr[2][2] = {{1,2}, {3,4}};

    // arr[0][0] =1;
    // arr[0][1] =2;
    // arr[1][0] =3;
    // arr[1][1] =4;

    // int arr[3][3];

    int r, c; 
    cout << "Enter row and column: ";

    cin >> r >> c;
    
    // int arr[r][c];

    vector<vector<int>> arr(r, vector<int>(c)); // Use vector of vectors

    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cin >> arr[i][j]; 
        }

    }
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cout << arr[i][j] << " "; 
        }
        cout <<endl;
    }
    return 0;
}