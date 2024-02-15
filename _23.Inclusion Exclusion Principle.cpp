//Kunal Sharma IIT JAMMU
#include <bits/stdc++.h>

using namespace std;

//code for checking the divisibility
int div(int n, int a, int b){
    int c1 = n/a;
    int c2 = n/b;
    int c3 = n/(a*b);
    return c1+c2-c3;
}

int main(){
    int number;
    int n1;
    int n2;

    cin >> number >> n1 >> n2;
    cout << div(number,n1,n2) << endl;
 
    return 0;
}