/*WAP to print the sum of given no and it's reverse*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, rev = 0;
    int total_sum;
    cin >> n;
    int num = n;

    while (n != 0)
    {
        rev = rev * 10 + n % 10;
        n = n / 10;
    }
    total_sum = rev + num;
    cout << total_sum;
    
    
    return 0;
}