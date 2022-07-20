#include <iostream>
#include <string>

using namespace std;

int main()
{ // use of append func
    string str;
    string s1 = "fam", s2 = "ily";
    s1.append(s2); // or s1=s1+s2
    cout << s1 << endl;
    cout << s1[1] << endl; // accessing a particular character in a string
    return 0;
}
