#include <iostream>
using namespace std;

class Base
{
public:
    virtual void print()
    {
        cout << "This is the base class's print function" << endl;
    }
    void display()
    {
        cout << "This is the base class's display function" << endl;
    }
};

class derived : public Base
{
public:
    void print()
    {
        cout << "This is the derived class's print function" << endl;
    }
    void display()
    {
        cout << "This is the derived class's display function" << endl;
    }
};
int32_t main()
{
    Base *baseptr;
    derived d;
    baseptr = &d;

    baseptr->print();   // print func has been called
    baseptr->display(); // display func has been called

    return 0;
}

// Here output will be : This is the base class's print function This is the base class's display function (both the base class has been print.so to ignore this we need to write 'virtual' previous to void.)