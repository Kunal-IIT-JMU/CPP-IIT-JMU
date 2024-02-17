//Kunal Sharma IIT JAMMU
#include <bits/stdc++.h>

using namespace std;

//Operator Overloading
class Complex{
private:
    int real, imag;

    public:
    Complex(int r,int i){
        real = r;
        imag = i;
    }

    Complex(){
        //Default constructor
    }

    Complex operator + (Complex const &obj){
        Complex result;
        result.imag = imag + obj.imag;
        result.real = real + obj.real;
        return result;
    }

    void display (){
        cout << real << " + i" << imag << endl;
    }
};

int main(){
    Complex c1(12,7);
    Complex c2(6,7);
    Complex c3 = c1+c2;
    c3.display();
    return 0;
}