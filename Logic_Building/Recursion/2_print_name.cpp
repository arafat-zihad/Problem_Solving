//print name n times using recursion

#include <bits/stdc++.h>
using namespace std;

void print(int i, int n){
    if(i > n) return;
    cout << "Arafat" << endl;
    print(i+1, n);
}

int main(){
    int n; cin >> n;
    print(1, n);    
    return 0;
}