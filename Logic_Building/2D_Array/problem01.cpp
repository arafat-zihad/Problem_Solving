/*Write a program to store roll number and marks obtained by n students side by side in a matrix.*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    int roll, marks;
    cout << "Enter the roll and marks: ";
    cin >> roll >> marks;

    // int arr[roll][marks];
    vector<vector<int>>arr(roll, vector<int>(marks));

    for(int i = 0; i < roll; i++){
        for(int j = 0; j< marks; j++){
            cin >> arr[i][j];
        }
    }

        cout << endl;


    for(int i = 0; i < roll; i++){
        for(int j = 0; j< marks; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    } 
    return 0;
}