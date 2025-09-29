//Write a program to rotate a matrix 90 degree clockwise


#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    vector<vector<int>>arr(n, vector<int>(n));

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        
        }
    }


    //Transpose
    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;

        }
    }

    // Transpose
    cout << endl<<"Transpose" << endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << arr[i][j] <<" ";
        }
        cout << endl;
    }

    //Rotate
    cout << endl << "Rotate" << endl;
    for(int i = 0; i < n; i++){
        for(int j = 0, k = n-1; j < k; j++, k--){
            int temp = arr[i][j];
            arr[i][j] = arr[i][k];
            arr[i][k] = temp;
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << arr[i][j] <<" ";
        }
        cout << endl;
    }
    
    return 0;
}