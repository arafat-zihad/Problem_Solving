/*Take positive integer input and tell if it is 
divisible by 5 or 3 but not divisible by 15*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    if(n % 5 == 0 || n % 3 == 0){
        if(n % 15 != 0){
            cout << "Divisible by 5 or 3 but not 15";
        }
        else{
            cout <<"The divisible by 15";
        }
    }
    else{
            cout << "Invalid";
        }
    return 0;
}