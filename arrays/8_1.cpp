// #include <iostream>
// using namespace std;

// int main()
// {
//     int array[4] = {10, 20, 30, 40};
//     cout << array[3] << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;

//     int array[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> array[i];
//     }

//     for (int i = 0; i < n; i++)
//     {
//         cout << array[i] << endl;
//     }

//     return 0;
// }

// MAXIMUM AND MINIMUM

#include <iostream>

using namespace std;
int main()
{
    int n;
    cin >> n;

    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    int arr[0];

    int max_no = arr[0];
    int min_no = arr[0];
    for (int i = 0; i < n; i++)
    {
        int arr[i];
        if (arr[i] > max_no)
        {
            max_no = arr[i];
        }
        if (arr[i] < min_no)
        {
            min_no = arr[i];
        }

        // max_no = max(max_no, arr[i]);
        // min_no = min(min_no, arr[i]);
    }

    cout << "Max no:" << max_no << " and Min no:" << min_no << endl;

    return 0;
}
