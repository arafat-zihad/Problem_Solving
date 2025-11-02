/*
1. Priority_Queue declaration
2. push()
3. empty()
4. size()
5. top()
6. pop()
7. swap()
8. emplace()
*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    
    // Declaration for Ascending Order
    // priority_queue<int>pq; //now top value will be highest value

    // Declaration for Descending Order
    priority_queue< int, vector<int>, greater<int> >pq; //now top value will be Smallest Value

    // add value
    pq.push(1);
    pq.push(4);
    pq.push(100);
    pq.push(3);
    pq.push(2);

    if(pq.empty()) cout << "Empty" << endl; // Check epmpty or not
    else cout << "Size: "  << pq.size() << endl; // // Check size

    // top() finding big /small value 
    cout << "Top value: " << pq.top() << endl;

    // if i use pop() now, it will delete top value ex.100
    pq.pop();
    // cout <<pq.top() << endl;

    while (!pq.empty())
    {
        cout << pq.top()<< " ";
        pq.pop();
    }
    cout <<"\nSize now: " <<  pq.size() <<endl;

    return 0;
}