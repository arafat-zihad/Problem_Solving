/*Given the length and breadth of a rectangle, 
write a program to find whether the area of the rectangle is greater thean its perimter.*/
//Area of rectangle, A = l*b
//Perimeter of rectangle, P = 2(l+b)

#include <bits/stdc++.h>
using namespace std;
int main(){
    double l, b, A, P;
    cin >> l >> b;
    A = l*b;
    P = 2*(l+b);

    if(A > P){
        cout << "Area is greater than Perimeter";
    }
    else if(A < P) {
        cout << "Area is smaller than Perimeter";
    }
    else{
        cout << "Both are equal";
    }
    return 0;
}