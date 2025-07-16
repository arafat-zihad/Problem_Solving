//Print form n ot 1

#include <bits/stdc++.h>
using namespace std;

void print(int i){
    if(i < 1) return;
    cout << i << endl;
    print(i-1);
}
int main(){
    int i; cin >> i;
    print(i);
    return 0;
}