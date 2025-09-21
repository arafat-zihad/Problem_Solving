//Calculate the sum of all the elemets given array.

#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[5]= {1, 3, 4, 9, 100};
    int sum = 0;
    for(int i = 0; i < 5; i++){
        sum += arr[i];
    }
    cout << sum  << endl;
    return 0;
}