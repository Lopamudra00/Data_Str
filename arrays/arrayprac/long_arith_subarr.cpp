// AN ARITHMETIC is an array that contains at least teo integers and the difference between consecutive integers are equal.For ex,[9,10],[3,3,3],and [9,7,5,3] are arithmetic arrays , while [1,3,3,7],[2,1,2] and [1,2,4] are not arithmetic arrays.

// Saraswati has an array of N non-negative integers. The i-th of the array is Ai.She wants to choose a contiguous arithmetic subarray from her array that has the max length. Please help her to determine the length of the longest contiguous arithmetic subarray.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int ans = 2;
    int pd = a[1] - a[0];
    int j = 2;
    int curr = 2;

    while (j < n)
    {

        if (pd == a[j] - a[j - 1])
        {
            curr++;
        }
        else
        {
            pd = a[j] - a[j - 1];
            curr = 2;
        }
        ans = max(ans, curr);
        j++;
    }
    cout << ans << endl;
    return 0;
}