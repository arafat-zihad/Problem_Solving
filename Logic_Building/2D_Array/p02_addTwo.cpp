//Write a program to add two matrices

#include <bits/stdc++.h>
using namespace std;
int main(){
    int r, c;
    cout << "Enter Raw and Column: ";
    cin >> r >> c;
    vector<vector<int>>arr(r, vector<int>(c));
    vector<vector<int>>brr(r, vector<int>(c));
    vector<vector<int>>result(r, vector<int>(c));

    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cin >> arr[i][j];
        }
    }
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cin >> brr[i][j];
        }
    }

    // With using extra array
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            result[i][j] = arr[i][j] + brr[i][j];
        }
    }

    cout << endl;
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    
    //Without using extra array

    // for(int i = 0; i < r; i++){
    //     for(int j = 0; j < c; j++){
    //         cout <<  arr[i][j] + brr[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    return 0;
}