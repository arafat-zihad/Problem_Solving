/*Display this GP - 1, 2, 4, 8, 16, 32,... upto 'n' terms*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, n, r;
    cin >> a >> n >> r;
    for(int i = 1; i <= n; i++){
        cout << a << endl;
        a = a* r;
    }
    return 0;
}