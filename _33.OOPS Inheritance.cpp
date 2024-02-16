//Kunal Sharma IIT JAMMU

/*

There are basically many types of inheritance and some of them are:
1. Single Inheritance
2. Multiple Inheritance
3. Multi level Inheritance
4. Hybrid Inheritance
5. Hierarchical Inheritance

Derived class(child) = The class that inherits from another class
Base Class(parent) = The class being inherited from

*/
#include <bits/stdc++.h>

using namespace std;

class student {         //parent class
    public:
    string name;
    int age;
    string gender;
};

class Studentinfo : public student{     //child class
    public:
    string city;

    void print_info(){
        cout << name << endl;
        cout << age << endl;
        cout << gender << endl;
        cout << city << endl;
    }
};

int main(){

    Studentinfo s1;
    s1.name = "Kunal Sharma";
    s1.age = 18;
    s1.gender = "Male";
    s1.city = "Ludhiana";

    s1.print_info();

    return 0;
}