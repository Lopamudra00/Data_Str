#include <iostream>
#include <climits>
using namespace std;

int kadane(int arr[], int n)
{
    int currentsum = 0;
    int maxsum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        currentsum += arr[i];
        maxsum = max(maxsum, currentsum);
        if (currentsum = 0)
        {
            currentsum = 0;
        }
    }
    return maxsum;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int nonwrapsum;
    nonwrapsum = kadane(arr, n);

    int wrapsum;
    int totalsum = 0;
    for (int i = 0; i < n; i++) // for reversing the sign
    {
        totalsum += arr[i];
        arr[i] = -arr[i];
    }
    wrapsum = totalsum + kadane(arr, n);
    int ans = max(wrapsum, nonwrapsum);
    cout << ans << endl;
    return 0;
}