/*Any year is input through the keyboard.
write a program to determin whether the year is a leap
year or not. (considering leap year occours after every 4 years)*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin >> x;
    
    if(x % 400 == 0){
        cout << "Leap Year" << endl;
    }
    
    else if(x % 100 == 0){
        cout << "Not Leap Year" << endl;
    }
    else if(x % 4 == 0){
        cout << "Leap Year" << endl;
    }
    else {
        cout << "Not leap year" << endl;
    }
    return 0;
}