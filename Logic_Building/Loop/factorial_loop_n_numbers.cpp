/*Print the factorials of first 'n' numbers*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int product = 1;
    for(int i = 1; i <= n; i++){
        product = product * i;
        cout << product << endl;
    }
    return 0;
}