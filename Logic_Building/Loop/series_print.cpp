//print the sum of this series
// 1 - 2 + 3 - 4 + 5 - 6

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, sum = 0;
    cin >> n;
    for(int i = 0; i <= n; i++){
        if(i % 2 == 0){
            sum = sum - i;
        }
        else {
            sum = sum + i;
        }
    }
    cout << sum << endl;
    
    return 0;
}