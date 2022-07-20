// write an algorithm to find that the given value exists in the matrix or not.
// Integers in each row are sorted in ascending order from left to right.
// Integers in each columns are sorted in ascending from top to bottom.

#include <iostream>
using namespace std;
int main()
{
    int n, m;
    int target;
    cin >> target;
    cin >> n >> m;
    int mat[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mat[i][j];
        }
    }

    int r = 0, c = m - 1;
    bool flag = false;
    while (r < n && c >= 0)
    {
        if (mat[r][c] == target)
        {
            flag = true;
        }
        if (mat[r][c] > target)
        {
            c--;
        }
        else
        {
            r++;
        }
    }
    if (flag)
    {
        cout << "Element found";
    }
    else
    {
        cout << "Element not found";
    }

    return 0;
}