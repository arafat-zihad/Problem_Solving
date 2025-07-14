//ICPC AUC Group - Fuction problem 2

#include <bits/stdc++.h>
using namespace std;

void print(int x){
    // int printer;
    for(int i = 1; i <= x; i++){
        cout << i;
        if(i != x) cout << " ";
    }
    cout << endl;
    return;
}

int main(){
    int n;
    cin >> n;
    print(n);
    return 0;
}