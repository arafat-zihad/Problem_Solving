/*
A 'set' is an associative container that stores "unique elements" in "sorted order".
It automatically arranges elements (by default in ascending order) and 
prevents duplicates.

Every element have to be unique, no multple same value.
Elements will be sorted.
You cannot access elements by index — you must use iterators.
Print using auto iterator: for(auto it: s) cout << it << " ";
Underlying data structure: Self-balancing Binary Search Tree (Red-Black Tree).
Each insertion, deletion, or search takes O(log n) time.


Key Properties:
----------------------------------
1. Stores unique elements.
2. Automatically sorted (by < operator by default).
3. Fast operations: insertion, deletion, search — all O(log n).
4. Cannot modify elements directly (because that might break ordering).

Common Functions:
----------------------------------
insert()        → Inserts element if not present.
emplace()       → Constructs and inserts (faster than insert).
erase()         → Removes element by value or iterator.
find()          → Returns iterator to element or end() if not found.
count()         → Returns 1 if present, else 0.
size()           → Returns number of elements.
clear()          → Removes all elements.
empty()          → Returns true if empty.
begin(), end()   → Iterators for traversal.
rbegin(), rend() → Reverse iterators.
swap(s2)         → Swaps contents with another set.

Use Cases:
----------------------------------
- Fast lookup of unique items.
- Removing duplicates while keeping data sorted.
- Useful in competitive programming problems involving unique sorted values.
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    //Declaration in default or Ascending order
    // set< int >s;

    // Declaration in Decending order
    set< int, greater <int> >s;

    //add elements
    s.insert(1);
    s.insert(3);
    s.insert(2);
    s.insert(4);

    // s.clear();
    // s.erase(2); //delete the value 2
    // empty(), size(), max_size()
    if(s.empty()) cout<< "Empty"  << endl;
    else cout << "Size: " << s.size() << " " << "and Max size: " << s.max_size() << endl;

    //How to print, iterator
    set<int>::iterator it; //it not needed for auto iterator
    for (it = s.begin(); it != s.end(); it++)
    {
        cout << *it << " ";
    }

    cout<<endl;

    //How to print using auto iterator
    for(auto it: s){
        cout << it << " ";
    }

    // Find value using find() and iterator
    it = s.find(2);

    if(it != s.end()) cout << "\nFound" << endl;
    else cout << "Not Found" << endl;

    // count() is like bool
    int c = s.count(20); cout << c << endl;


    return 0;
}