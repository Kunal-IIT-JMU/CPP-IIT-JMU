//Kunal Sharma IIT JAMMU
#include <bits/stdc++.h>

using namespace std;

//Code for GCD
int GCD(int a, int b){
    if(a==0)
    return b;

    if(b == 0)
    return a;

    while (a!=b){
        if(a>b){
            a = a-b;
        }
        else{
            b = b-a;
        }
    }
    return a;
}

int main(){
    
    int a,b;
    cout << "Enter the Values of a and b" << endl;
    cin >> a >> b;

    int ans = GCD(a, b);
    cout << ans << endl;

    return 0;
}