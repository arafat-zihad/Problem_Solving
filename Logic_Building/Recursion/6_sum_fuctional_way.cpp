//Print 1 to n number using functional recursion way

#include <bits/stdc++.h>
using namespace std;

int sum(int n){
    if(n == 0) return 0;
    return n + sum(n-1);
}
int main(){
    int n;
    cin >> n;
    cout << sum(n) << endl;

    return 0;
}