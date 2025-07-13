//Swap 2 numbers without third variable

#include <bits/stdc++.h>
using namespace std;
void sw(int &a, int &b){
    a = a + b;
    b = a - b;
    a = a - b;
    return;
}
int main(){
    int x, y;
    cin >> x >> y;
    sw(x, y);
    cout << "x = "  << x << ", y = " << y;
    return 0;
}