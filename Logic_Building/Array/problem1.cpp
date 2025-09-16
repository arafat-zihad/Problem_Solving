/*Given an array of marks of students, if the mark of
any student is less than 35 print its roll number. 
(roll number here refers to the index of the array)*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    float arr[5] = {80.5, 34, 53, 53.4, 20};
    for(int i = 0; i < 5; i++){
        if(arr[i] < 35){
            cout << i << endl;
        }
    }
    return 0;
}