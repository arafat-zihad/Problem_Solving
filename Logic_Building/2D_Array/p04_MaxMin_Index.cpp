/*
1) Find the max and min elemets
2) The index of max element
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int r, c;
    cout << "Enter Raw and Column: ";
    cin >> r >> c;
    vector<vector<int>> arr(r, vector<int>(c));
    vector<vector<int>> brr(r, vector<int>(c));

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> arr[i][j];
        }
    }

    int max = INT_MIN;
    int min = INT_MAX;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (max <= arr[i][j])
                max = arr[i][j];
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (min >= arr[i][j])
                min = arr[i][j];
        }
    }

    cout << "Max is: " << max << endl;
    cout << "Min is: " << min << endl;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (max == arr[i][j])
                cout <<"Max Element's Index: " << i << " " << j;
        }
    }
    return 0;
}