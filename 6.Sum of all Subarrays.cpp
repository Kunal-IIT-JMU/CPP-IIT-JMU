//Kunal Sharma IIT JAMMU
#include <bits/stdc++.h>

using namespace std;

int main(){

    //given array
    int arr[] = {1,2,3,4,5};
    int k;
    int sum =0;

    for(int i =0; i<5; i++){
        k = 0;
        for(int j=i; j<5; j++){
            k = k + arr[j];
        }
        sum = sum + k;
    }

    //printing the soln
    cout << sum ;
    return 0;
}