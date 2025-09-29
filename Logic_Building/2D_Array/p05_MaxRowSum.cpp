//Write a program to print the row number having the maximum sum in a given matrix and the max sum.

#include <bits/stdc++.h>
using namespace std;
int main(){
    int r, c;
    cout << "Enter Raw and Column: ";
    cin >> r >> c;
    vector<vector<int>>arr(r, vector<int>(c));

    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cin >> arr[i][j];
        }
    }
    int sum = 0;
    int index = 0;
    int max = INT_MIN;
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            sum += arr[i][j];
            if(max < sum){
            max = sum;
            index = i;
            }
        }
        sum = 0;
    }

    cout << "Max Sum Row: " << index << endl;
    cout << "Max Sum: " << max << endl;
    return 0;
}