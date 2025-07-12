//WAP to count digit of a given number.

#include <bits/stdc++.h>
using namespace std;
int main(){
    int cnt = 0;
    int n; cin >> n;
    while(n != 0){
        n = n / 10;
        cnt++;
    }
    cout << cnt << endl;
    return 0;
}