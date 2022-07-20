#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
int main()
{
    string s = "hgxhbashkjnj";
    transform(s.begin(), s.end(), s.begin(), ::toupper); // or tolower
    cout << s << endl;
}