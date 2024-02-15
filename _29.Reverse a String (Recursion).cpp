//Kunal Sharma IIT JAMMU
#include <bits/stdc++.h>

using namespace std;

//code for reversing the given string
void reverse(string s){
    if(s.length() == 0){
        return;
    }
    string ros = s.substr(1);
    reverse(ros);
    cout << s[0];
}

int main(){
    string name;
    cin >> name;
    reverse(name);
    return 0;
}