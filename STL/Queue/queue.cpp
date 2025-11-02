/*
* First in First out (FIFO)
1. Queue declaration
2. push()
3. empty()
4. front()
5. back()
6. pop()
7. emplace()
*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    // Declaration
    queue<int>q;

    // Add elements
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    
    //push() and emplace() are same
    q.emplace(7);

    // Chdck size
    cout << q.size() << endl;

    // Check empty or not: q.empty

    // front and back funciton

    cout << "First: " << q.front() << " " << "Back: " << q.back() << endl;

    /*Important
    pop() remove the first element not last, not like pop_pack() in vectior
    */
    q.pop();
    cout << "Now first value is: " << q.front() << endl;

    // q.emplace();
    
    // Printing 
    while (!q.empty()) //Or q.size() > 0
    {
        cout << q.front() << " "; 
        q.pop();
    }

    // swap() used to swap with with quueu
    //q1.swap(q2);
    
    return 0;
}