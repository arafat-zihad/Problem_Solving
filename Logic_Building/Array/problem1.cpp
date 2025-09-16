/*Given an array of marks of students, if the mark of
any student is less than 35 print its roll number. 
(roll number here refers to the index of the array)*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    float arr[] = {80.5, 60.5, 12, 59, 34, 53, 53.4, 20};
    for(size_t i = 0; i < sizeof(arr) / sizeof(arr[0]) ; i++){
        if(arr[i] < 35){
            cout << i << endl;
        }
    }
    return 0;
}