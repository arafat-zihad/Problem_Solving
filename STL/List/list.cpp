#include <bits/stdc++.h>
using namespace std;
int main(){

    // List declaration
    list<int>li;

    //add element in the back
    li.push_back(1);
    li.push_back(2);
    li.push_back(3);
    //add elements in the front
    li.push_front(4);

    //Print elements in list we can't print without iterator
    list<int>::iterator it;
    for(it = li.begin(); it != li.end(); it++){
        cout << *it << " ";
    }

    cout << endl;
    //Another way to print 
    for(auto it: li){
        cout << it << " ";
    } 

    // print first & last values of list
    cout <<"\nFirst value: " << li.front() << "\nLast value: " << li.back();
    
    //Remove element from the back and front
    li.pop_back();
    li.pop_front();

    //Print size
    cout<<"\nSize is: " << li.size() << endl;
    return 0;

    //clear the list
    // li.clear();

    //to check empty
    //li.empty()

    
}