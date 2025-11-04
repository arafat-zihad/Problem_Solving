#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, cnt = 0;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n - 1; i++){
        cin >> v[i]; 
    }
    sort(v.begin(), v.end());

    for(int i = 0; i < n; i++){
        // if(v[i] != v[i+1]){
        //     cnt++;
        // } else continue;
        cout << v[i] << " ";
    }
    // cout << cnt;
    
    
    return 0;
}