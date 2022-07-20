#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s1 = "noncompoop";
    s1.erase(3, 3); // index =3, no. of characters we want to delete=3
    cout << s1 << endl;
    return 0;
}