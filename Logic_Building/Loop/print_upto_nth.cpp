/*Display this AP - 1, 2, 3. 5, 7, 9 ... upto nth terms.*/

#include <bits/stdc++.h>
using namespace std;

// With math formula
int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= 2 * n - 1; i = i + 2)
    {
        cout << i << " ";
    }

    
    // Without math formula
    cout << endl;
    int a = 1;
    for (int i = 1; i <= n; i++)
    {
        cout << a << " ";
        a = a + 2; 
    }
    return 0;
}
