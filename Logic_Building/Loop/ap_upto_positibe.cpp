/*Display this AP - 100, 97, 94,... upto all terms which are positive*/

#include <bits/stdc++.h>
using namespace std;
int main(){

    int a = 100; 

    while (a > 0) {
        cout << a << " ";
        a = a - 3;
    }

    // for(int i = 1; a > 0; i++){
    //     cout << a << " ";
    //     a = a - 3;
    // }
    return 0;
}  