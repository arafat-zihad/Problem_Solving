/*
Given a matrix having 0-1 only, find row with max no of 1's*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int r, c; cin >> r >> c;
    vector<vector<int>>arr(r, vector<int>(c));
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cin >> arr[i][j];
        }
    }
    
    int maxCnt = INT_MIN;
    for(int i = 0; i < r; i++){
        int cnt = 0;
        for(int j = 0; j < c; j++){
            if(arr[i][j] == 1){
                cnt = cnt + 1;
            }
        }
        if(cnt > maxCnt){
            maxCnt = cnt;
        }
    }

    cout << maxCnt << endl;
    
    return 0;
}