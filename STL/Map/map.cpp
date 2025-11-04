/*
MAP (map)

Short Note:

A 'map' is an associative container that stores **key → value** pairs with **unique keys** in **sorted order** (by key).
Keys are ordered using '<' by default (so iteration is ascending by key).

✅ Underlying data structure: Self-balancing Binary Search Tree (usually Red-Black Tree).
✅ Each insert, erase, or find operation runs in O(log n).
✅ Operator[] will insert a default-constructed value if the key does not exist.
✅ Use map when you need ordered keys and fast lookup by key.

Key Properties:
----------------------------------
1. Keys are **unique**. If you need duplicates, use `multimap`.  
2. Elements are stored as `pair<const Key, T>`. Key is const inside the map.  
3. No random access by index — use iterators.  
4. `operator[]` inserts if key missing; `at()` throws if key missing.

Common Functions:
----------------------------------
insert(pair) / emplace(k, v) → Insert a (key, value) pair.  
operator[](k)                 → Access or create value for key k.  
at(k)                         → Access value; throws out_of_range if missing.  
find(k)                       → Iterator to key or end().  
erase(k) / erase(iterator)    → Remove element by key or iterator.  
count(k)                      → 0 or 1 (presence check).  
lower_bound(k) / upper_bound(k) → Iterators for ordering queries.  
begin(), end(), rbegin(), rend() → Iteration.  
size(), clear(), empty(), swap(m2) → utilities.

Use Cases:
----------------------------------
- Frequency counting (word → count).  
- Associative lookups needing order (timestamp → value).  
- Ordered events, coordinate compression, prefix-like queries using iterators.
*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    // Map Declaration
    map<int, int> mp; // first int will be use for index, secend is for value

    // Add element
    mp.insert({1, 20});
    mp[2] = 20;
    mp.insert({4, 20});
    mp.insert({3, 20});

    // map<int, string > mp1; // first int will be use for index, secend is for value
    // mp1.insert({1, "aaaa"});
    // mp1.[2] = "bbbb";
    // mp1.insert({4, "cccc"});
    // mp1.insert({3, "dddd"});
    

    mp[2] += 100; // See how it use in different style

    //print value
    cout << "Value of second index: " << mp[2] << endl;
    // Print using auto keyword, Output will be sorted
    for(auto it: mp){
        cout << it.first << ") " << it.second << "  ";
    }

    cout << endl;
    //Print using iterator, output sorted
    map<int, int>::iterator it;
    for (it = mp.begin(); it!= mp.end(); it++){
        cout << it -> first << ") " << it -> second << "  ";

    }

    
    


    return 0;
}