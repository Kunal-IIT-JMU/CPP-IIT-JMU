//Kunal Sharma IIT JAMMU
#include <bits/stdc++.h>

using namespace std;

//Printing numbers in the increasing order
void inc(int n){
    if(n == 0){
        return;
    }
    inc(n-1);
    cout << n << " ";
}

//Printing numbers in the decreasing order
void dec(int n){
    if(n == 0){
        return;
    }
    cout << n << " ";
    dec(n-1);
}

int main(){
    int n;
    cin >> n;
    inc(n);
    cout << endl;
    dec(n);
    cout << endl;
    return 0;
}