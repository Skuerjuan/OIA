#include<iostream>
#include<string>
using namespace std;

int n1;
int n2;
int n3;
string s;
int main(){
    cin >> s;
    if(s == "cuadrado"){
        cin >> n1;
        cout << n1*n1;
    }
    else if(s == "rectangulo"){
        cin >>  n1 >> n2;
        cout << n1*n2;
    }
    else if(s == "cubo"){
        cin >> n1;
        cout << (n1*n1)*6;
    }
    else{
        cin >> n1 >> n2 >> n3;
        cout << (n1*n2)*2 + (n2*n3)*2 + (n1*n3)*2;
    }
}
