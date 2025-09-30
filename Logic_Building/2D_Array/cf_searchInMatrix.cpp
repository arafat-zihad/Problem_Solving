// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/S

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
    int cnt = 0;

    int x; cin >> x;
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            if(arr[i][j] == x){
                cnt++;
            }
        }
    }
    if(cnt > 0){
        cout <<"will not take number" << endl;
    }
    else{
        cout << "will take number" << endl;
    }
    return 0;
}