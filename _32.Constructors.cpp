//Kunal Sharma IIT JAMMU
#include <bits/stdc++.h>

using namespace std;

//Code for the constructors
class student{
    public:
    string name;
    int age;
    string gender;

    // student(){
    //     //Default constructer
    // }

    student(string s, int a, string g){     //using a constructer to set the value for the variables
        name = s;                           //using a parameterised constructor
        age = a;
        gender = g;
    }

    student(student &a){
        name = a.name;
        age = a.age;
        gender = a.gender;
    }

    void getinfo(){                     //Creating a method to print the info of the student
        cout << name << endl;
        cout << age << endl;
        cout << gender << endl;
    }
};

int main(){

    student s1("Kunal Sharma",18,"Male");
    s1.getinfo();

    cout << "*******************************" << endl;

    student b = s1;
    b.getinfo();

    return 0;
}