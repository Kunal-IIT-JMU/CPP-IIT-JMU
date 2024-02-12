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

    //Another method of Uppercase and lowercase
    string x = "kunal";

    transform(x.begin(), x.end() ,x.begin(), ::toupper);        //return UPPERCASE VERSION
    cout << x << endl;

    transform(x.begin(), x.end() ,x.begin(), ::tolower);        //return LOWERCASE VERSION
    cout << x << endl;

    //find the greatest number from the given string
    string num = "1592364780";
    sort(num.begin(),num.end());
    reverse(num.begin(),num.end());
    cout << num << endl;

    //finding the frequency of the alphabets in the string
    string st = "fajdkhfdslfhaoifd";

    int f[26];

    for(int i =0; i<26; i++)     //making an array to store the frequency of the array parts
        f[i] = 0;
    
    for(int i =0; i<26; i++){   //stroring the freq at their place in the array
        f[st[i]-'a'] ++;
    }

    char ans = 'a';
    int maxF = 0;
    
    for(int i =0; i<26; i++){   //finding the maximum of the array and the character which has max frequency
        if(f[i] > maxF){
            maxF = f[i];
            ans = i + 'a';
        }
    }

    cout << maxF << " " << ans << endl ;    //printing the answer
    return 0;
}