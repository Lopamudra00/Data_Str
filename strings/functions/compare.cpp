#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string s1 = "abc";
    string s2 = "xyz";
    cout << s1.compare(s2) << endl;

    // to check empty
    // cout << s1 << endl;
    // s1.clear();
    // if (s1.empty())
    // {
    //     cout << "string is empty";
    // }
    return 0;
}