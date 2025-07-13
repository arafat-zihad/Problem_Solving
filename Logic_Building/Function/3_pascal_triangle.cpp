/**/

#include <bits/stdc++.h>
using namespace std;
int factorial(int x){
    int fact = 1;
    for(int i = 1; i <= x; i++){
        fact = fact * i;
    }
    return fact;
}
int combination (int n, int r){
    int nCr = factorial(n)/(factorial(r) * factorial(n - r));
    return nCr;
}
int main(){
    int n;
    cin >> n;
    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= i; j++){
            int icj = combination(i,j);
            cout << icj << " ";
        }
        printf("\n");

    }
    return 0;
}