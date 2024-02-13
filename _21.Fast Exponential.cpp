//Kunal Sharma IIT JAMMU
#include <bits/stdc++.h>

using namespace std;

//Code for Fast Exponential

int main(){
    int a,b;
    cout << "Enter the number whose a^b you want:" << endl;
    cin >> a >> b;

    int k = a;
    int temp = a;

    if(b%2 == 0){
        while (b>0){
            a = a*k;
            k = k*k;
            b = b/4;
        }
    }

    else{
        while (b>0){
            a = a*k;
            k = k*k;
            b = b/4;
        }
        a = a*temp;
    }
    cout << a << endl;
    return 0;
}