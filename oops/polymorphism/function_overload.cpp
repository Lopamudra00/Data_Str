#include "bits/stdc++.h"
using namespace std;

// function overloading
class College
{
public:
    void fun()
    {
        cout << "I am a function with no arguments" << endl;
    }

    void fun(int x)
    {
        cout << "I am a function with arguemnts" << endl;
    }

    void fun(double x)
    {
        cout << "I am a function with double arguement" << endl;
    }
};

int32_t
main()
{
    College obj;
    obj.fun();
    obj.fun(4);
    obj.fun(3.14);

    return 0;
}