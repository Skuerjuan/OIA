#include<iostream>
#include<string>
using namespace std;

string s;
int rep = 1;
int absRep = 1;
char mem;

int main(){
    cin >> s;
    mem = s[0];
    s.erase(0, 1);
    for(char i : s){
        if(i == mem) rep++;
        else{
            if(rep > absRep) absRep = rep;
            rep = 1;
        }
        mem = i;
    }
    cout << absRep;
}
