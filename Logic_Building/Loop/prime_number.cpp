/*write a program to find it's prime number or not*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, cnt = 0;
    cin >> n;
    // for(int i = 2; i < n; i++){
    //     if(n % i == 0){
    //         cnt++;
    //     }
    // }
    // if(cnt >= 1){
    //     cout << "Prime";
    // } else{
    //     cout << "Not Prime";
    // }

    //Solve using Breck statement
    for(int i = 2; i <= n -1; i++){
        if(n % i == 0){
            cnt = 1;
            break;
        }
    }
    if( cnt == 0){
        cout << "Prime";
    }
    else{
        cout <<"Not prime";
    }

    return 0;
} 