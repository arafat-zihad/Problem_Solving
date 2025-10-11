// sum of n numbers
#include <bits/stdc++.h>
using namespace std;
int add(int n){
    if(n == 1){
        return 1;
    }
    
    int sum;
    sum = n + add(n-1);
    return sum;

}

int main(){
    int n; cin >> n;
    // add(n);
    cout << add(n) << " ";
    return 0;
}