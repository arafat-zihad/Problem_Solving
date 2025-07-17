//Sum of first N numbers using perameterised way

#include <bits/stdc++.h>
using namespace std;

void sum(int i, int add){
    if(i < 1){
        cout << add << endl;
        return;
    }
    sum(i-1, add = add+i);
}
int main(){
    int n; cin >> n;
    sum(n, 0);
    return 0;
}