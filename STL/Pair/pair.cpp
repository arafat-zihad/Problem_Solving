/*
PAIR (pair)

'pair' is a simple container to store **two heterogeneous values** together.
It's widely used to return two values from a function, store key-value-like items (e.g., in maps),
or group elements for sorting and algorithms.

✅ Pairs are comparable lexicographically by default (first, then second).  
✅ Very cheap and convenient — no heavy overhead.  
✅ Works great with structured bindings (C++17) and `tie()` for unpacking.

Common Patterns:
----------------------------------
- Construction: `pair<T1,T2> p{a,b};` or `make_pair(a,b)`.  
- Access: `p.first`, `p.second`.  
- Swap: `swap(p1, p2)` or `p1.swap(p2)`.  
- Unpack: structured bindings `auto [x,y] = p;` or `tie(x,y) = p;`.  
- Use in containers (vector<pair<...>>) and maps as keys.
*/

#include <bits/stdc++.h>
using namespace std;
int main(){

    // Declaration
    pair <int, int > p;

    p.first = 10;
    p.second = 20;
    
    return 0;
}