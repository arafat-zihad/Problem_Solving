/*

Stack = Last in First Out (LIFO)
* Stack is opposit with Queue (FIFO)

1. Declaration
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
    stack <int> st;

    st.push(1);
    st.push(5);
    st.push(4);
    st.push(3);
    st.push(2);

    if(st.empty()) cout << "Empty" << endl; // empty()
    else cout << "Size: " << st.size() << endl; // size()

    // pop() remove last element
    st.pop();

    // top() will be the last value in default
    cout << "Top: " << st.top() <<endl;

    // print whole stack
    while(!st.empty()){
        cout << st.top() << " ";
        st.pop(); 
    }


    return 0;
}