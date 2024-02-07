//Kunal Sharma IIT JAMMU
#include <bits/stdc++.h>

using namespace std;

//Insertion sort code
void Insertion_Sort(int arr[],int n){
    for(int i=0; i<n; i++){
        int k = arr[i];
        int j = i-1;
        while (arr[j]>k && j>=0){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = k;
    }
    return;
}

int main(){

    //taking the array
    int arr[] = {1,5,9,2,3,6,4,7,8,0};

    Insertion_Sort(arr,10);

    //printing the sorted array
    for(int i=0; i<10; i++){
        cout << arr[i] << " ";
    }
    return 0;
}