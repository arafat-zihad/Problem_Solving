/*Display this gp - 100, 50, 25,... upto 'n' terms*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    float a = 100;
    int n; 
    cin >> n;
    for(int i = 1; i <= n; i++){
        cout << a << " ";
        a = a * 0.5;
    }
    return 0;
}