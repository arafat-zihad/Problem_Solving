/*Take 3 positibe interger input and print the greatest of them*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, b, c;
    cin >> a >> b >> c;

    if(a > b && a > c){
        cout << a << " a is the greatest" << endl;
    }
    else if(b > a && b > c){
        cout << b << " b is the greatest" << endl;
    }
    else {
        cout << c << " is the greatest" << endl;
    }
    
    return 0;
} 