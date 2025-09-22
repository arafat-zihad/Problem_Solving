/*Find the total number of pairs in the Array whose
sum is equal to the given value x */
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    vector<int>arr(n);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int x; cin >> x;
    int cnt = 0;
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(arr[i] + arr[j] == x){
                cout << "(" << arr[i] << "," << arr[j] << "), ";
                cnt++;
            }
    }
    }
    cout << cnt << endl;

    //Little change of different output

    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < n; j++){
    //         if(arr[i] + arr[j] == x){
    //             cout << "(" << arr[i] << "," << arr[j] << "), ";
    //             cnt++;
    //         }
    // }
    // }
    // cout << cnt << endl;

    return 0;
}