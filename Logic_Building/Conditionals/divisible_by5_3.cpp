/*Take positve integer input and tell if it is divisible by 5 and 3*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    if(n % 5 ==0 && n % 3 == 0){
        cout << "divisible by 3 and 5" << endl;
    }
    else {
        cout << "not divisible by 3 and 5" << endl;
    }
    return 0;
}