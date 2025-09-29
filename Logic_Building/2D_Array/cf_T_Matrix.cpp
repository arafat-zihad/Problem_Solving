#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; 
    cin >> n; 
    vector<vector<int>>arr(n, vector<int>(n));

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }

    int d = 0, s = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == j){
                d += arr[i][j];
            }
            if(i+j == n -1){
                s += arr[i][j];
            }
        }
    }
    int diff = abs(d - s);
    cout << diff << endl;
    
    return 0;
}