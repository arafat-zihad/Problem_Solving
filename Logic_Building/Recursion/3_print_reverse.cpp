//Print form n ot 1

#include <bits/stdc++.h>
using namespace std;

void print(int n, int i){
    if(n < 1) return;
    cout << n << endl;
    print(n-1, i);
}
int main(){
    int n; cin >> n;
    print(n, 1);
    return 0;
}