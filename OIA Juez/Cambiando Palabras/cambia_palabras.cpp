#include<iostream>
#include<string>
using namespace std;

int n;
string s;

int main(){
    cin >> s;
    cin >> n;
    s[n-1] = 'X';
    cout << s;
}
