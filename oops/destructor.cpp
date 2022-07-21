#include <iostream>
using namespace std;

class student
{
    string name;

public:
    int age;
    bool gender;

    student()
    {
        cout << "default constructor" << endl;
    }
    student(string s, int a, int g)
    {
        cout << "parameterised constructor" << endl;

        name = s;
        age = a;
        gender = g;
    }

    student(student &a)
    {
        cout << "COPY CONSTRUCTOR" << endl;
        name = a.name;
        age = a.age;
        gender = a.gender;
    }

    // DESTRUCTOR (it comes to act when we get out of main function because the variables ll get destroy wehn it comes out of main() function.)
    ~student()
    {
        cout << "DESTRUCTOR has BEEN CALLED" << endl;
    }
    void setName(string s)
    {
        name = s;
    }

    void getName()
    {
        cout << name << endl;
        cout << age << endl;
        cout << gender << endl;
    }
};

int main()
{
    student a("lopa", 20, 1);
    student b;
    student c = a;
    return 0;
}
