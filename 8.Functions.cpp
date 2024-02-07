//Kunal Sharma IIT JAMMU
#include <bits/stdc++.h>

using namespace std;

void Check_Pyth_Triplet(int a, int b, int c){
    
    //finding the maximum
    int max1;
    if(a>b && a>c){
        max1 = a;
        a = 0;
    }
    else if(b>a && b>c){
        max1 = b;
        b = 0;
    }
    else{
        max1 = c;
        c = 0;
    }

    //checking is it the pythagorian triplet
    int hyp_fac = pow(max1,2);
    
    if(hyp_fac == pow(a,2) + pow(b,2) + pow(c,2)){
        cout << "Yes , it is a pythagorean triplet.";
    }
    else{
        cout << "No, it is not a pythagorean triplet.";
    }
    return;
}

int main(){
    int a,b,c;
    cin >> a >> b >> c;
    Check_Pyth_Triplet(a,b,c);
    return 0;
}