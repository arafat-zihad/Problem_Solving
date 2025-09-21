/*Given an array of integers, change the vaue of the all
odd indexed elements to its second multiple 
and increment all even indexed value by 10*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    vector <int>arr(n);
    
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++){
        if(i % 2 != 0){
            arr[i] = arr[i] * 2;
        }
        else{
            arr[i] = arr[i] + 10;
        }
    }

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}