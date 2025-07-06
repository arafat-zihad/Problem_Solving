/*Given a point (x, y), write a program to find out if 
it lis on the x-axis, y-axis or at the origin, viz (0,0)*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    int x, y;
    cin >> x >> y;
    
    if(x == 0 && y == 0){
        cout << "The point is origin" << endl;
    }
    else if(x == 0){
        cout << "Lies on y-axis" << endl;
    }
    else {
        cout << "Lies on x-axis" << endl;
    }
    return 0;
}