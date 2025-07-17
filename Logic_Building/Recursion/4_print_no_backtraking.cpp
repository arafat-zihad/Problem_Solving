//Print 1 to N using recursion and backtraking
// #include <bits/stdc++.h>
// using namespace std;

// void print(int i, int n){
//     if(i < 1) return;
//     print (i - 1, n);
//     cout << i << endl;
// }

// int main(){
//     int n; cin >> n;
//     print(n, n);
//     return 0;
// }

//Print N to 1 using recursion and backtraking
#include <bits/stdc++.h>
using namespace std;

void print(int i, int x){
    if(i > x) return;
    print (i + 1, x);
    cout << i << endl;
}

int main(){
    int n; cin >> n;
    print(1, n);
    return 0;
}