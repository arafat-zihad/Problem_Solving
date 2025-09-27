//Find the sum of a given matrix of n x m
#include <bits/stdc++.h>
using namespace std;
int main(){
    int r, c;
    cout << "Enter Raw and Column: ";
    cin >> r >> c;
    vector<vector<int>>arr(r, vector<int>(c));
    vector<vector<int>>brr(r, vector<int>(c));

    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cin >> arr[i][j];
        }
    }
    int sum = 0;

    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            sum += arr[i][j];
        }
    }

    cout << sum << endl;
    return 0;
}