//Print first 'n" fibonacci numbers

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int a = 1, b = 1, sum = a + b;

    if(n >= 1) cout << a << " ";
    if(n >= 2) cout << b << " ";
    for(int i = 1; i <= n - 2; i++){
        sum = a + b;
        cout << sum << " ";
        a = b;
        b = sum;
        // cout << sum;
    }
    return 0;
}