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

    student(student &a){                //copy constuctor (Deep Copy)
        name = a.name;
        age = a.age;
        gender = a.gender;
    }

    void getinfo(){                     //Creating a method to print the info of the student
        cout << name << endl;
        cout << age << endl;
        cout << gender << endl;
    }

    ~student(){                        //Destructer to erase the memory
        cout << "Destructor called !!!" << endl;        //it will be called as many times as the no of objects created
    }

    bool operator == (student &a){     //operator overloading
        if(name == a.name && age == a.age && gender == a.gender){       //used to make a n operator behave as we want i.e. predefine the output of the operator
            return true;
        }
        return false;
    }
};

int main(){

    student s1("Kunal Sharma",18,"Male");
    s1.getinfo();

    cout << endl;

    student b = s1;
    b.getinfo();

    cout << endl;

    if(b == s1)
        cout << "Same" << endl;
    else
        cout << "Not Same" << endl ;
    return 0;
}