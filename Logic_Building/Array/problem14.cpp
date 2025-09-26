/*

4 step to rotate a arr from k:
    1. if K > n, k = k % n
    2. reverse (arr, 0, n-1)
    3. reverse(arr, o, k-1)
    4. reverse (arr, k, n-1)
*/

void reverse(int arr[], int st, int ed){
    for(int i = st, j= ed; i < j; i++, j--){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    return;
}

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;

    vector<int>arr(n);
    for(int i = 0; i< n; i++){
        cin >> arr[i];
    }

    cout << "Enter the value of k: ";
    int k; cin >> k;

    reverse(arr.data(), 0, n-1);
    reverse(arr.data(), 0, 2);
    reverse(arr.data(), k, n-1);

    for(int i = 0; i< n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}