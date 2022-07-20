#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{ // CONVERSION TO UPPER CASE
    string str = "hasgshgsjklk";
    string str1 = "SGFDJFJGKUF";

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 32;
        }
    }
    cout << str << endl;

    // CONVERSION TO LOWER CASE
    for (int i = 0; i < str1.size(); i++)
    {
        if (str1[i] >= 'A' && str1[i] <= 'Z')
        {
            str1[i] += 32;
        }
    }
    cout << str1 << endl;

    return 0;
}