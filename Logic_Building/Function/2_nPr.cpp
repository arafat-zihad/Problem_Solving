// nPr = n! / (n-r)!

#include <bits/stdc++.h>
using namespace std;
int factorial(int x){
    int fact = 1;
    for(int i = 1; i <= x; i++){
        fact = fact * i;
    }
    return fact;
}
int main(){
    int n, r;
    cin >> n >> r;
    int nPr = factorial(n)/factorial(n-r);
    cout << nPr;
    return 0;
}
