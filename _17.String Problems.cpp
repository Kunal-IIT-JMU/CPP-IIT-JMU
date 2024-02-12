//Kunal Sharma IIT JAMMU
#include <bits/stdc++.h>

using namespace std;

//Creating functions to uppercase the given string
string uppercase(string s){
    for(int i = 0 ; i < s.size(); i++){
        if(s[i] >= 'a' && s[i] <= 'z'){
            s[i] = s[i] - 32;
        }
    }
    return s;
}

//Creating a Function to lowercase the given string
string lowercase(string s){
    for(int i = 0 ; i < s.size(); i++){
        if(s[i] >= 'A' && s[i] <= 'Z'){
            s[i] = s[i] + 32;
        }
    }
    return s;
}
int main(){

    string s = "Kunal Sharma";
    cout << uppercase(s) << endl;
    cout << lowercase(s) << endl;
    
    return 0;
}