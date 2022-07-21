// to acess data from outside the function
#include <iostream>
using namespace std;

class student
{
    string name;

public:
    int age;
    bool gender;

    // SET FUNCTION
    void setName(string s)
    {
        name = s;
    }

    // GET FUNCTION
    void getName()
    {
        cout << name << endl;
    }

    void printInfo()
    {
        cout << "Name = ";
        cout << name << endl;
        cout << "Age = ";
        cout << age << endl;
        cout << "Gender = ";
        cout << gender << endl;
    }
};

int main()
{
    student arr[3];

    for (int i = 0; i < 3; i++)
    {
        string s;
        cout << "Name = ";
        cin >> s;
        arr[i].setName(s);
        cout << "Age = ";
        cin >> arr[i].age;
        cout << "Gender = ";
        cin >> arr[i].gender;
    }
    for (int i = 0; i < 3; i++)
    {
        arr[i].printInfo();
    }

    return 0;
}