//Kunal Sharma IIT JAMMU
#include <bits/stdc++.h>
using namespace std;

//selection sort algorithms
void Selection_sort(int arr[],int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(arr[j] > arr[i]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    return;
}


int main(){

    //taking sample array unsorted array
    int arr[10] = {1,5,9,2,3,6,7,8,4,0};
    int n =10;

    Selection_sort(arr,n);

    //printing the array
    for(int i=0; i<10; i++){
        cout << arr[i];
    }

    return 0;
}