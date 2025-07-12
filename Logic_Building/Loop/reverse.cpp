//WAP to print reverse of a given no

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, rev;
    cin >> n;
    while (n != 0)
    {
        rev = n % 10;
        n = n / 10;
        cout << rev;
    }
    cout << endl;

    return 0;
}