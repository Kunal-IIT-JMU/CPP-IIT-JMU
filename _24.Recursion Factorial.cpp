//Kunal Sharma IIT JAMMU
#include <bits/stdc++.h>

using namespace std;

//Code for Factorial
int Fac(int n){
    if(n==0)
        return 1;
    int prevfact = Fac(n-1);
    return (n*prevfact);
}

int main(){
    int n;
    cout << "Entre the number whose Factorial you want: ";
    cin >> n;
    cout << "Ans is : " << Fac(n) << endl;
    return 0;
}