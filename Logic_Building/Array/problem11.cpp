//WAP to copy elements of array to another array in reverse order

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    vector<int>arr(n);
    vector<int>brr(n);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++){
        brr[i] = arr[n -1 - i];
    }

    for(int i = 0; i < n; i++){
        cout << brr[i] << " ";
    }

    return 0;
}