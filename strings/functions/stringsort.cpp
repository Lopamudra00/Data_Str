#include <iostream>
#include <algorithm>
#include <string>

using namespace std;
int main()
{
    string s1 = "xcvgdjsdbskjdheijd";
    sort(s1.begin(), s1.end()); // s1.begin() se string ka starting iterator milta hai aur  s2.end() se string khatam hone k baad wala iterator milta hai
    cout << s1 << endl;

    return 0;
}