//Kunal Sharma IIT JAMMU
#include <bits/stdc++.h>

using namespace std;

//function for palindrome check
bool palindrome_check(char array[],int n){
    for(int i=0; i<n; i++){
        if(array[i] != array[n-1-i]){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cin >> n;

    char arr[n+1];
    cin >> arr;

    cout << palindrome_check(arr,n+1);
    //print zero then not a palindrome
    //print one then is a palindrome

    return 0;
}
