/*Display this GP - 1, 2, 4, 8, 16, 32,... upto 'n' terms*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, n;
    cin >> a >> n;
    for(int i = 1; i <= n; i++){
        cout << a << endl;
        a = a* 2;
    }
    return 0;
}