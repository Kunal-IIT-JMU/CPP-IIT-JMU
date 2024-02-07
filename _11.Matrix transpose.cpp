//Kunal Sharma IIT JAMMU
#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;  //this is the no of rows and column
    cin >> n;
    
    int matrix[n][n];

    //taking the input
    for(int i=0; i<n; i++){
        for(int j =0; j<n; j++){
            cin >> matrix[i][j];
        }
    }

    //taking the transpose
    for(int i=0 ;i<n/2; i++){
        for(int j=0; j<n; j++){
            swap(matrix[i][j],matrix[j][i]);
        }
    }

    //printing the output
    for(int i=0; i<n; i++){
        for(int j =0; j<n; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}