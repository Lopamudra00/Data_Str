#include <iostream>
#include <string>
using namespace std;

int main()
{ // STRING TO INTEGER
    string s1 = "781";
    int x = stoi(s1); // numeric string has been converted to integer.
    cout << x + 2 << endl;

    // INTEGER TO STRING
    int z = 786;
    cout << to_string(z) + "2" << endl;
}
