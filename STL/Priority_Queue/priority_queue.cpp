/*
1. Priority_Queue declaration
2. push()
3. empty()
4. size()
5. top()
6. pop()
*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    
    // Declaration
    priority_queue<int>pq;
    
    // add value
    pq.push(1);
    pq.push(2);
    pq.push(3);
    pq.push(4);

    if(pq.empty()) cout << "Empty" << endl; // Check epmpty or not
    else cout << pq.size() << endl; // // Check size

    


    return 0;
}