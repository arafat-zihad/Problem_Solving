//Find the second largest element in the given array

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    vector<int>arr(n);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int max = INT_MIN;
    int smax = INT_MIN;

    for(int i = 0; i < n; i++){
        if(arr[i] > max)
        max = arr[i];
    }

    for(int i = 0; i < n; i++){
        if(arr[i] != max && arr[i] > smax){
            smax = arr[i];
        }
    }
    cout << smax;

    return 0;
}