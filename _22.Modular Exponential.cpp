//Kunal Sharma IIT JAMMU
#include <bits/stdc++.h>

using namespace std;

//Modular Exponential Code
int Modular_Exponential(int a, int b){
    int res = 1;

    while(b>0){

        if(b&1){
            res = res * a;
        }

        a = a*a;
        b = b >> 1;
    }
    return res;
}

int main(){
    int a , b;
    cin >> a >> b;

    cout << Modular_Exponential(a,b) << endl;
    return 0;
}