// #include <iostream>
// using namespace std;
// int main()
// {
// int a = 10;
// int *aptr = &a;

// cout << *aptr << endl;
// *aptr = 20;
// cout << a << endl;

//     int arr[] = {10, 20, 30};
//     cout << *arr << endl;

//     int *ptr = arr;
//     for (int i = 0; i < 3; i++)
//     {
//         cout << *ptr << endl;
//         ptr++;
//     }
//     return 0;
// }

#include <iostream>
using namespace std;
int main()
{
    int arr[] = {10, 20, 30};
    cout << *arr << endl;

    int *ptr = arr;
    for (int i = 0; i < 3; i++)
    {
        cout << *(arr + i) << endl;
        // arr++; // this is illegal ,it is a constant pointer. we can only modify it.
    }
    return 0;
}