//Kunal Sharma IIT JAMMU
#include <bits/stdc++.h>

using namespace std;

//Creating class student
class student{
    public:                 //provides the accessibilty of the elements outside the class
    string name;
    int age;
    string gender;

    void print_info(){          //just an example class methods

        cout <<  "Name = ";
        cout << name << endl;

        cout << "Age = ";
        cout << age << endl;

        cout << "Gender = ";
        cout << gender << endl;
    }
};

int main(){
    
    student s1;
    s1.name = "Kunal Sharma";
    s1.age = 18;
    s1.gender = "Male";

    s1.print_info();

    return 0;
}