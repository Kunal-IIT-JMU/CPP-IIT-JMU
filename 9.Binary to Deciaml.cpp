//Kunal Sharma IIT JAMMU
#include <bits/stdc++.h>

using namespace std;

//function to convert to binary
int binary_to_decimal(int n){
    int ans = 0;
    int i =0;
    while(n>0){
        int y = n % 10;
        ans = ans + y*pow(2,i);
        i ++;
        n = n/10;
    }
    return ans;
}

int main(){

    int n; 
    cin >> n;

    cout << binary_to_decimal(n);

    return 0;
}
//similarly other funtions of other transformations can be created.
