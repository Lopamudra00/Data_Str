// subarray- continuous part of array.
// subsequence is a seq. that can be derived an array by selecting zero or more elements , without changing the order of the remaining elements.
// every subarray is a subsequence but every subsequence is not a subarray.

// SUM OF ALL SUBARRAYS
// approach:
//            (1)iterate over all the subarrays,
//            (2)nested loop
//                          for every i=0 to i = n-1:
//                                  for every j=i to j=n-1
//                                          output sum[i...j]

#include <iostream>
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

    int current = 0;
    for (int i = 0; i < n; i++)
    {
        current = 0;
        for (int j = i; j < n; j++)
        {
            current += a[j];
            cout << current << endl;
        }
    }
    return 0;
}
