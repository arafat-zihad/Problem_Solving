/*Take 3 numbers input and tell if they can be the sides of a triangle*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, b, c;
    cin >> a >> b >> c;

    if((a + b) > c && (b + c) > a && (a + c) > b){
        cout << "They can be a tringle" << endl;
    }
    
    else {
        cout << "No" << endl;
    }
    
    return 0;
} 