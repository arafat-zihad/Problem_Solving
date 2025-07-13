/*nCr = n!/(r! *(n-r))*/

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
    //Without function:
    int n,r;
    cin >> n >> r;
   
    // int nfact = 1, rfact = 1, nrfact = 1;
    // for(int i = 1; i <=n; i++){
    //     nfact = nfact * i;
    // }
    // for(int i = 1; i <=r; i++){
    //     rfact = rfact * i;
    // }

    // for(int i = 1; i <=n-r; i++){
    //     nrfact = nrfact * i;
    // }

    // int nCr = nfact/(rfact * nrfact);
    // cout << nCr;

    //With funciton:
    int nCr = factorial(n)/(factorial(r) * factorial(n-r));
    cout << nCr;

     return 0;
}