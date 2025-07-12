//WAP to print sum of all the even digit of a given no

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, even,num, sum = 0;
    cin >> n;
    while (n != 0)
    {
        num = n % 10;
        if(num % 2 == 0){
            even = num;
        }
        else{
            even = 0;
        }
        sum = sum + even;
        n = n / 10;
    }
    cout << sum << endl;
    
    return 0;
}