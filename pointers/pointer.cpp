#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int *aptr;
    aptr = &a;
    cout << &a << endl;    // address of a
    cout << aptr << endl;  // value of a
    cout << *aptr << endl; // accessing the variable 'a'

    return 0;
}