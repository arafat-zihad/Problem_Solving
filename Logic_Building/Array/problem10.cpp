//Find the second largest element in the given array

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    vector<int>arr(n);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int max = INT_MIN;
    int smax = INT_MIN;

//Uiing Single loop
     for(int i = 0; i < n; i++){
        if(arr[i] > max)
        smax = max;
        max = arr[i];
    }

// Using two loop
    // for(int i = 0; i < n; i++){
    //     if(arr[i] > max)
    //     max = arr[i];
    // }

    // for(int i = 0; i < n; i++){
    //     if(arr[i] != max && arr[i] > smax){
    //         smax = arr[i];
    //     }
    // }
    cout <<"Second Max is: " <<  smax << endl;

    return 0;
}