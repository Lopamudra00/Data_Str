// #include <iostream>
// using namespace std;

// void increment(int a) // this is different variable
// {
//     a++;
// }

// int main()
// {
//     int a = 2;
//     increment(a);
//     cout << a << endl; // 2
//     return 0;
// }

#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b; // these are int pointers'
    *b = temp;
}
int main()
{
    int a = 2;
    int b = 4;

    int *aptr = &a;
    int *bptr = &b;
    swap(aptr, bptr); // or swap(&a,&b)

    // swap(a, b); // we are passing by value.

    cout << a << " " << b << endl; // 2 4

    return 0;
}