// CONSTRUCTOR
#include <iostream>
using namespace std;
class student
{
    string name;

public:
    int age;
    bool gender;
    // DEFAULT CONSTRUCTOR (we are not passing any values to it.It acts when we are not making any constructor)
    student()
    {
        cout << "default constructor" << endl;
    }

    // PARAMETERISED CONSTRUCTOR
    student(string s, int a, int g)
    {
        cout << "parameterised constructor" << endl;
        // we want ki name mein ye string aa jaye.
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

    // SET FUNCTION
    void setName(string s)
    {
        name = s;
    }

    // GET FUNCTION
    void getName()
    {
        cout << name << endl;
        cout << age << endl;
        cout << gender << endl;
    }

    // void printInfo()
    // {
    //     cout << "Name = ";
    //     cout << name << endl;
    //     cout << "Age = ";
    //     cout << age << endl;
    //     cout << "Gender = ";
    //     cout << gender << endl;
    // }
};

int main()
{
    student a("lopa", 20, 1);
    // a.getName();
    // a.printInfo();

    student b;     // it will call default constructor
    student c = a; // COPY CONSTRUCTOR (the values of a will get stored in c)
    return 0;
}
