//WAP to print reverse of a given no

#include <bits/stdc++.h>
using namespace std;
int main(){
    // int n, rev = 0;
    // cin >> n;
    // while (n != 0)
    // {
    //     rev = rev * 10 + n % 10;
    //     n = n / 10;
    //     cout << rev;
    // }
    // cout << endl;

    // return 0;

    int n, rev = 0;
    cin >> n;
    while (n != 0)
    {
        rev = rev * 10 + n % 10;
        n = n / 10;
    }
    cout << rev << endl;

    return 0;
}