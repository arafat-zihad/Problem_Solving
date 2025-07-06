/*Take positive interger input and tell if it is a three digit number or not*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    if(n > 99 && n < 1000){
        cout << n << " is three digit number" << endl;
    }
    else cout << "not a three digit number" << endl;
    
    return 0;
}