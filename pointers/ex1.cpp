#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    int *aptr = &a;
    *aptr = 20;
    cout << a << endl; // updated value will get printed

    return 0;
}