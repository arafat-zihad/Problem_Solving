/*Convert a square matrix into its transpose without using extra matrx*/

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



    for(int i = 0; i < n; i++){
        for(int j = 1; j < n; j++){
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;

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