#include <bits/stdc++.h>

using namespace std;

int main(){

    string s1 = "Family";
    string s2 = " is my Love.";
    string q = "Mom and Dad";
    cout << q.append(s2) << endl;  //add the s2 to the end of s1

    cout << s1 + s2 << endl;    //add the s2 to the end of the s1

    s1.clear();    //erase all the data stored in the s1
    cout << s1 << endl;

    string k = "Kunal";
    string s = "Kunal";

    if(!k.compare(s)){
        cout << "Yes they are equal." << endl; //compare function will compare the two given strings and will return 0 if equal and return 1 if not equal
    }

    string a = "kunalsharma";
    cout << a << endl;
    a.erase(0,5);          //erases a certain part of the string 
    cout << a << endl;

    string empty = "";
    if(empty.empty())      //chceks whether the string is empty or not
        cout << "The string is empty." << endl;

    string ab = "Kunal Sharma";
    cout << ab.find("Shar") << endl;        //find the index of the substrings in the main string with respet to 0 index system

    string add = "kunalrma";
    add.insert(5,"sha");        //insert the string at a given location in the given string
    cout << add << endl;

    string sub = "Kunal Sharma IIT JAMMU";
    string z = sub.substr(13,3);        //creates a substring
    cout << z << endl;

    string num = "221";
    int x = stoi(num);      //converts string to numbers
    x = x+20;
    cout << x << endl;

    int n = 164;
    string ns = to_string(n);       //covert the given integer to a string
    cout << ns << "2" << endl;

    string sor = "awxyopqrstbfguvzhijcdeklmn";
    sort(sor.begin(),sor.end());        //sorting is done in strings in this method
    cout << sor << endl;

    return 0;
}