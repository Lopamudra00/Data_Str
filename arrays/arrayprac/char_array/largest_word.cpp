#include <iostream>
using namespace std;
int main()
{
    // largest word in a sentence
    int n;
    cin >> n;
    cin.ignore();
    char arr[n + 1];

    cin.getline(arr, n);
    cin.ignore();

    int i = 0;
    int currLen = 0;
    int maxLen = 0;
    int st = 0, mxst = 0;

    while (1) // true
    {
        if (arr[i] == ' ' || arr[i] == '\0')
        {
            if (currLen > maxLen)
            {
                maxLen = currLen;
                mxst = st;
            }
            currLen = 0;
            st = i + 1;
        }
        else
        {
            currLen++;
        }

        if (arr[i] == '\0')
            break;
        i++;
    }

    cout << maxLen << endl;
    for (int i = 0; i < maxLen; i++)
    {
        cout << arr[i + mxst];
    }

    return 0;
}