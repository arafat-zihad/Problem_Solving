//
int min(int x, int y){
    if(x < y) return x;
    else return y;
}

int gcd(int x, int y){
    int gretest;
    for (int i = 0; i <= min(x, y); i++){
        if(x%i == 0 && y%i == 0){
            gretest = i;
        }
    }
    return gretest;
}

#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, b; cin >> a >> b;
    int result = gcd(a, b);
    cout << result << endl;
    return 0;
}