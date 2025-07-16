#include <bits/stdc++.h>
using namespace std;

void print(int cnt, int x){
    if(cnt == x) return;
        cout << cnt << endl;
        print(cnt + 1, x);
}
int main(){
    int n; cin >> n;
    print(0, n);
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// void print(int cnt, int x){
//     if(cnt == x) return;
//     cout << cnt << endl;
//     print(cnt + 1, x);
// }

// int main(){
//     int n; cin >> n;
//     print(0, n);
//     return 0;
// }