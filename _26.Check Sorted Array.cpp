//Kunal Sharma IIT JAMMU
#include <bits/stdc++.h>

using namespace std;

//Code to check the array is sorted
bool sorted(int arr[],int n){
    if(n == 1){
        return true;
    }
    bool restArray = sorted(arr+1,n-1);
    return (arr[0]<arr[1] && restArray);
}

int main(){
    int s_arr[10] = {0,1,2,3,4,5,6,7,8,9};
    int ns_arr[10] = {4,5,6,3,7,8,9,1,2,0};

    cout << "This array is " << sorted(s_arr,10) << endl;
    cout << "This array is " << sorted(ns_arr,10) << endl;
    return 0;
}