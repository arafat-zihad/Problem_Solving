//Write a programm to reverse the array without using any extra array.

#include <bits/stdc++.h>
using namespace std;

void reverse(int arr[], int n){
    for(int i = 0, j = n-1; i < j; i++, j--){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    return;
}

int main(){
    int n; cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    reverse(arr, n);
    
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
      
    return 0;
}