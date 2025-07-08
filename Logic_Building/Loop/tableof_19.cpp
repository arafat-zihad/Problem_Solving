/*Print the table of 19*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    //drift 1
    for (int i = 1; i <=10; i++){
        cout << "19 * " << i << " = " << i * 19 << endl;
    }

    //drift 2
    cout << endl;
    for(int i = 19; i <= 190; i = i + 19){
        cout << i << " ";
    }
    return 0;
}