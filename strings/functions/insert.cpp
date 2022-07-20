#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1 = "nincompoop";
    s1.insert(2, "lol"); // in which index we have to insert
    cout << s1 << endl;
    return 0;
}