//write a program to print odd no from 1 to 100

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i = 0; i <= n; i++){
        if(i % 2 == 0){
            continue;
        }
        cout << i <<" ";
    }

    
    return 0;
}