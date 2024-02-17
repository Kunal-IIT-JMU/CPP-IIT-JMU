//Kunal Sharma IIT JAMMU
#include <bits/stdc++.h>

using namespace std;

//Function Overloading OOPS
class practise {
    public:
    void fun(){                                                                 //function with name fun but no attribute
        cout <<  "This is a class method with no attribute." << endl;
    }
    void fun(int n){                                                            //function with same name fun but integer attribute
        cout << "This is a class method with an integer attribute." << endl;
    }
    void fun(double a){                                                         //function with same name fun but double attribute
        cout << "This is a class method with a double attribute." << endl;
    }

    /*
    All these functions made are different as any two components in a class are equal when the function name and the attributes are equal.
    This is called Function Overloading in oops.
    This is used in larger classes where we have different function with same name but different attributes.
    */
};

int main(){

    practise kunal;
    kunal.fun();
    kunal.fun(100);
    kunal.fun(100.20);

    return 0;
}