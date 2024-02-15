//Kunal Sharma IIT JAMMU
#include <bits/stdc++.h>

using namespace std;

//Code For first occurance
int firstocc(int arr[], int n, int i, int key){
    if(i == n){
        return -1;
    }
    if(arr[i] == key){
        return i;
    }
    return firstocc(arr,n,i+1,key);
}

//code for last occurance 
int lastocc(int arr[], int n, int i, int key){
    if(i == n){
        return -1;
    }
    int restarr = lastocc(arr,n,i+1,key);
    if (restarr != -1){
        return restarr;
    }
    if(arr[i] == key){
        return i;
    }
    return -1;
}

int main(){
    int arr[] = {4,2,1,2,5,2,7};
    cout << firstocc(arr,7,0,2) << endl;
    cout << lastocc(arr,7,0,2) << endl;
    return 0;
}