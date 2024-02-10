//Kunal Sharma IIT JAMMU
#include <bits/stdc++.h>

using namespace std;

//binary search code
void Binary_Search(int arr[], int n, int key){
    int s,e;
    s = 0;
    e = n -1;
    while(s<=e){
        int mid = (s+e)/2;

        if(arr[mid]==key){
            cout << "Yes Found It.";
            return ;
        }
        else if(arr[mid]>key){
            e = mid-1;
        }
        else{
            s = mid +1;
        }
    }
    cout << "No Not Found.";
    return;
}


int main(){

    int key;
    cin >> key;

    //sample array (it must be sorted for the while being taking a sorted array)
    int arr[] = {1,2,3,4,5,6,7,8,9,10};

    int n;
    n = sizeof(arr)/sizeof(int);

    Binary_Search(arr,n,key);

    return 0;
}
