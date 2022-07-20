#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    int *aptr = &a;
    cout << aptr << endl; // 2000
    aptr++;
    cout << aptr << endl; // 2004
    return 0;
}

#include <iostream>
using namespace std;
int main()
{
    char ch = 'a';
    char *cptr = &ch;
    cout << cptr << endl; // 3000
    cptr++;
    cout << cptr << endl; // 3001
    return 0;
}

// character take 1byte
