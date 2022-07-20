#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s1 = "nincompoop";
    string s = s1.substr(6, 4); // from index= 6 and no. of character is 4
    cout << s << endl;
    return 0;
}