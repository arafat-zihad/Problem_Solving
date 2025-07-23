//Reverse the number using 1 pointer or variable in recursion
#include <bits/stdc++.h>
using namespace std;

void fun (int arr[], int i, int n){
    if(i >= n/2) return;
    swap(arr[i], arr[n-i-1]);
    fun(arr, i+1, n);
}

int main(){
    int n;
    cout << "How many numbers: ";
    cin >> n;

    int arr[n];
    cout << "Enter the numbers: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    fun(arr, 0, n);

    cout << "Revers numbers: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}