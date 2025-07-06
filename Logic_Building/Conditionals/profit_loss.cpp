/*If cost price and selling price of an item is input through the keyboard, 
write a program to determine whether the sellier has made profit or incurred loss.
Alos determine how much profite he made or loss he incurred*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    int cprice, sprice, hlose, hprofit;
    cin >> cprice >> sprice;

    if(cprice < sprice){
        cout << "Profit" << endl;
        hprofit = sprice - cprice;
        cout << " " << hprofit << endl;
    }
    else if (cprice > sprice){
        cout << "Loss";
        hlose = cprice - sprice;
        cout << " " << hlose << endl;
    }

    return 0;
}