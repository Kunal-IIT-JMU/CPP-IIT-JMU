//Kunal Sharma IIT JAMMU
#include <bits/stdc++.h>

using namespace std;

//Function for swapping numbers
void swap_num(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp; 
    return ;
}

int main(){
    int a,b;
    cin >> a >> b;

    cout << "Earlier the value of a and b are " << a << " " << b << endl;

    swap_num(&a,&b);

    cout << "After that the value of a and b are " << a << " " << b << endl;
    
    return 0;
}