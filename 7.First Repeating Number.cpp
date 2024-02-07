//Kunal Sharma IIT JAMMU
#include <bits/stdc++.h>

using namespace std;

int main(){

    int arr[7] = {1,5,3,4,3,5,6};

    for(int i= 0; i<7; i++){
        for(int j=i+1; j<7; j++){
            if(arr[i]==arr[j]){
                cout << i+1;
                goto end;
            }
        }        
    }
    end:
    return 0;
}