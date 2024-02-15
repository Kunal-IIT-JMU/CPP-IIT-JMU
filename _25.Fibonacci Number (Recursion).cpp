//Kunal Sharma IIT JAMMU
#include <bits/stdc++.h>

using namespace std;

//Code for the Nth Fibonacci Number
int Nth_Fib(int n){
    int ans = 0;
        if(n==0||n==1){
            return n;
        }
    return Nth_Fib(n-1) + Nth_Fib(n-2);
}

int main(){
    int  n;
    cin >> n;
    cout << Nth_Fib(n) << endl;
    return 0;
}