/*Write a program to print the transpose of the matrix
entered by the user and store it in a seperate matirx*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    int r, c; cin >> r >> c;
    vector<vector<int>>arr(r, vector<int>(c));
    vector<vector<int>>brr(r, vector<int>(c));
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cin >> arr[i][j];
        }
    }

    for(int i = 0; i < c; i++){
        for(int j = 0; j < r; j++){
            brr[j][i] = arr[j][i];
        }
    }

    for(int i = 0; i < c; i++){
        for(int j = 0; j < r; j++){
            cout << brr[j][i] << " ";
        }
        cout << endl;
    }
    
    return 0;
}