#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s1 = "nincompoop";
    cout << s1.length() << endl;

    for (int i = 0; i < s1.length(); i++)
    {
        cout << s1[i] << endl;
    }
    return 0;
}