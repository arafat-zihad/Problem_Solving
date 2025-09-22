/*Find the difference between the sum of elements at
even indices to the sum of elements at odd indicess*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    vector<int>arr(n);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int sumE = 0, sumO = 0;
    for(int i = 0; i < n; i++){
        if(i % 2 == 0){
            sumE += arr[i];
        }
        else{
            sumO += arr[i];
        }
    }

    int diff = abs(sumE - sumO);
    cout << diff << endl;
    return 0;
}