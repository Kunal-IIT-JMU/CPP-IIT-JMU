// Kunal Sharma IIT JAMMU
#include <bits/stdc++.h>

using namespace std;

// Virtual Functions
class base
{
public:
    virtual void print()
    {
        cout << "This is the base class's print function." << endl;
    }
    void display()
    {
        cout << "This is the base class's display function." << endl;
    }
};

class derived : public base
{
public:
    void print()
    {
        cout << "This is the Derived class's print function." << endl;
    }
    void display()
    {
        cout << "This is the Derive class's display function." << endl;
    }
};

int main()
{
    base *baseptr;
    derived a;
    baseptr = &a;
    baseptr->print();
    baseptr->display();

    return 0;
}