//Count the number of triplets whose sum is equal to the given value x

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
            for(int k = j+1; k < n; k++){
                if(arr[i] + arr[j] + arr[k] == x){
                cout << "(" << arr[i] << "," << arr[j] <<"," << arr[k] << "), ";
                cnt++;
            }
            }
    }
    }
    cout << cnt << endl;

    return 0;
}