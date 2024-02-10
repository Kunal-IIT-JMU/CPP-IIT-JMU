#include <bits/stdc++.h>
using namespace std;

// Function for palindrome check
bool palindrome_check(char array[], int n) {
    for(int i = 0; i < n / 2; i++) {
        if(array[i] != array[n - 1 - i]) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cin >> n;

    // Allocate memory for the character array
    char arr[n + 1]; // Additional space for null terminator
    cin >> arr;

    cout << (palindrome_check(arr, n) ? "1" : "0") << endl; // Print "1" for palindrome, "0" for not palindrome

    return 0;
}
