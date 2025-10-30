#include <bits/stdc++.h>
using namespace std;
int main(){
    // Assign vector
    vector<int>v;

    // Fill the vector with 12, 7 times
    v.assign(7, 12);

    cout << "The vector elements are; ";
    for(int i = 0; i < 7; i++){
        cout << v[i] << " ";
    }

    // insert 30 to the last position 
    v.push_back(24);
    cout << "\nThe last element is: " << v[v.size()-1];

    // remove last element
    v.pop_back();

    // prints the vector again
    cout <<"\nThe vector elements after pop_pack are: "; 
    for (int i = 0; i < v.size(); i++) 
    cout << v[i] << " "; 

    //inserts 10 at the beginning
    v.insert(v.begin(), 10);
    cout << "\nThe first element after insert command is: " << v[0]; 
   
    // insert 20 at the end
    v.emplace_back(20);
    cout << "nThe last element after emplace_back is: " << v[v.size() - 1];

    // erases the vector 
    v.clear();
    cout <<"\nVector size after clear(): " << v.size();

    //two vector to perform swap
    vector<int>obj1, obj2;
    obj1.push_back(2);
    obj1.push_back(4);
    obj2.push_back(6);
    obj2.push_back(8);

    // Swaps obj1 and obj2
    obj1.swap(obj2);

    cout << "\nAfter swap \nVector1: ";
    for (int i = 0; i < obj1.size(); i++) 
        cout << obj1[i] << " "; 
   
    cout << "\nVector 2: "; 
    for (int i = 0; i < obj2.size(); i++) 
    cout << obj2[i] << " "; 
    
    return 0;
}