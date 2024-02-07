//Kunal Sharma IIT JAMMU
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;

    int spiral[n][n];

    for(int i =0; i<n; i++){
        for(int j =0; j<n; j++){
            cin >> spiral[i][j];
        }
    }

    //spiral order print
    int r_s = 0;
    int r_e = n-1;
    int c_s = 0;
    int c_e = n-1;

    while(r_s <= r_e && c_s <= c_e){

        //for  row start
        for(int col = c_s; col <= c_e; col++){
            cout << spiral[r_s][col] << " ";
        }
        r_s++;

        //for Column end
        for(int row =r_s; row <= r_e; row++){
            cout << spiral[row][c_e] << " ";
        }
        c_e--;

        //for row end
        for(int col = c_e; col >= c_s; col--){
            cout << spiral[r_e][col] << " ";
        }
        r_e--;

        //for column start
        for(int row = r_e; row >= r_s; row --){
            cout << spiral[row][c_s] << " ";
        }
        c_s++;
    }
    
    return 0;
}