// given an array nd a value,find if there exists three numbers whose sun is equal to the given value.

#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    int n;
    cin >> n;
    int target;
    cin >> target;
    vector<int> a(n);

    for (auto &i : a)
    {
        cin >> i;
    }
    bool found = false;
    sort(a.begin(), a.end());
    for (int i = 0; i < n; i++)
    {
        int low = i + 1, high = n - 1;
        while (low < high)
        {
            int current = a[i] + a[low] + a[high];
            if (current == target)
            {
                found = true;
            }
            else if (current < target)
            {
                low++;
            }
            else if (current > target)
            {
                high--;
            }
        }
    }

    if (found)
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }

    return 0;
}