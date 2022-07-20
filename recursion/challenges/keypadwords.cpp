// print all the possible words from phone digits
// {"","./","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"} . For ex, from 2 and 3 , we can have {ab,ae,af,bd,be,bf,cd,ce}

#include <iostream>
using namespace std;

string keypadArr[] = {"", "", " abc ", " def ", " ghi ", " jkl ", " mno ", " pqrs ", " tuv ", " wxyz "};

void keypad(string s, string ans)
{
    if (s.length() == 0)
    {
        cout << ans << endl;
        return;
    }
    char ch = s[0];
    string code = keypadArr[ch - '0'];
    // ch - ascii code of 0 = integer
    string ros = s.substr(1);

    for (int i = 0; i < code.length(); i++)
    {
        keypad(ros, ans + code[i]);
    }
}

int main()
{
    keypad("23", "");

    return 0;
}