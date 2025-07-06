/*Take input percentage of a student and print the grade according to marks:
1) 90 - 100 Excellent
2) 80 - 90 Very good
3) 70 - 80 Good
4) 60 - 70 Can do better
5) 50 - 60 Average 
6) 40 - 50 Below Average 
7) <40 Fail*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;

    if (n <= 100 && n >= 90){
        cout << "Excellent" << endl;
    }
    return 0;
}