/*Geven three points (x1, y1), (x2, y2) and (x3, y3), write a program to check if all the three points fall on one straigh line.*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    // double x1, y1, x2, y2, x3, y3;
    float x1,x2,x3,y1,y2,y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    double m1, m2;

    m1 = (y2 - y1)/ (x2 - x1);
    m2 = (y3 - y2) / (x3 - x2);

    if(m1 == m2){
        cout << "The fall on the one straight line";
    } else {
        cout << "Not fall on the one straight line";
    }
    return 0;
}

           