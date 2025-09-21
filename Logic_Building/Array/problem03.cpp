// Calculate the product of all the elements in the given array.

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);   // dynamic array

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    long long product = 1;
    for(int i = 0; i < n; i++){
        product *= arr[i];
    }

    cout << product;
    return 0;
}
