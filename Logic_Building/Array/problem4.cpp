//Find the max value out of all the elements in the array.
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    vector <int> arr(n);
    for(int i = 0; i < n ; i++){
        cin >> arr[i];
    }
    
    int max = INT_MIN;
    for(int i = 0; i < n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }

    cout << max << endl;

    return 0;
}