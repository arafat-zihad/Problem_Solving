/*
begin(): This function returns an iterator pointing to the first element in the vector.

end(): The end() function returns an iterator pointing to the last element in the vector.
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v;
    for(int i = 1; i <= 10; i++)
        v.push_back(i);
    
    cout << "Understanding begin() and end() function: " << endl;
    for(auto i  = v.begin(); i != v.end(); i++){
        cout << *i << " ";
    }
    return 0;
}