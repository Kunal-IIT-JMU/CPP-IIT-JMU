//Kunal Sharma IIT JAMMU
#include <bits/stdc++.h>

using namespace std;

//linear search code
void linear_search(int arr[], int n, int key){
    for(int i=0; i<n; i++){
       if(arr[i] == key){
            cout << "YES Found It.";
            return;
        }
        cout << "NO Not found.";
    }
    return;
}


int main (){

    //sample array
    int array[] = {12,21,24,32,14,15,65,45};
    int search_element;
    cin >> search_element;

    linear_search(array,sizeof(array)/sizeof(int),search_element);

    return 0;
}