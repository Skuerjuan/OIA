#include<iostream>
#include<string>
using namespace std;

string s1;
string s2;

int main(){
    cin >> s1 >> s2;
    if(s1 < s2) cout << "LA PRIMERA";
    else if(s2 < s1) cout << "LA SEGUNDA";
    else cout << "IGUALES";
}
