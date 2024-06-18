#include<iostream>
#include<string>
using namespace std;
 
string s;
int rep = 1;
int absRep = 1;
 
int main(){
    cin >> s;
    for(int i = 0; i < s.size(); i++){
        if(s[i+1] == s[i]) rep++;
        else rep = 1;
        if(i == s.size()-1 && s[i] == s[i-1]) rep++;
        if(rep > absRep) absRep = rep;
    }
    cout << absRep;
}