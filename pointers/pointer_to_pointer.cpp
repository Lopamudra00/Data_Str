// a=10
// p=2000
// q=4000
#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int *p;
    p = &a;

    cout << *p << endl; // 10

    int **q = &p;
    cout << *q << endl;  // 2000
    cout << **q << endl; // 10
    return 0;
}
