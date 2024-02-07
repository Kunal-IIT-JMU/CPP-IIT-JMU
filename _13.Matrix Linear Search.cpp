//Kunal Sharma IIT JAMMU
#include <bits/stdc++.h>

using namespace std;

int main(){
    int size;
    cin >> size;

    int search;
    cin >> search;

    int matrix[size][size];

    //taking input in the matrix
    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            cin >> matrix[i][j];
        }
    }

    //linear search algorithm
    for(int i=0; i<size; i++){
        for(int j =0; j<size; j++){
            if(matrix[i][j] == search){
                cout << "Yes, Found.";
                goto end;
            }
        }
    }
    cout << "No, Not Found.";
    end:
    return 0;
}