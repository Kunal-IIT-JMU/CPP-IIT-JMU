//Kunal Sharma IIT JAMMU
#include <bits/stdc++.h>

using namespace std;

//bubble sort algorithm
void Bubble_Sort(int arr[],int n){
    int k =1;

    while (k<n){
        for(int i=0; i<n; i++){
            if(arr[i]>arr[i+1]){
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
        k++;
    }
    return;
}

int main(){

    //taking the array (unsorted)
    int arr[10] = {1,5,9,2,3,6,4,7,8,0};

    Bubble_Sort(arr,sizeof(arr)/sizeof(int));

    //printing the array
    for(int i=0; i<10; i++){
        cout << arr[i] << " ";
    }

    return 0;
}