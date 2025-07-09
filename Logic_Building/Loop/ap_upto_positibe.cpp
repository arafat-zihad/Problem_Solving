/*Display this AP - 100, 97, 94,... upto all terms which are positive*/

#include <bits/stdc++.h>
using namespace std;
int main(){

    int a, n; 
    cin >> n >> a;

    for (int i = 1; i <= n ; i++){
        cout << a <<" ";
        a = a - 3;
    }
    return 0;
}  