/*If an array arr contatins n elements, 
then check if the given array is a palindrome or not*/

#include <bits/stdc++.h>
using namespace std;

void checkpalindrome(int arr[], int n){
    for(int i = 0, j = n-1; i < j; i++){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        if(arr[i] != arr[j]){
            cout <<"Not Palindrome" << endl;
            break;
        }
        else{
            cout << "Palindrome" << endl;
            break;
        }
    }
    
}

int main(){
    int n; cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    checkpalindrome(arr, n);
    return 0;
}