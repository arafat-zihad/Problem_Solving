#include <bits/stdc++.h>
using namespace std;

void palin(int i, string &s){
    if(i >= s.size()/2) {
    cout << "Yes";
    return;
    }

    if(s[i] != s[s.size() - i - 1]){
    cout << "No";
    return;
    }
    palin(i+1, s); 
}
int main(){
    string s;
    cin >> s;
    palin(0, s);
    return 0;
}