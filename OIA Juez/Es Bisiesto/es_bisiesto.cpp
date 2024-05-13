#include<iostream>
using namespace std;

int a;
bool bis;

int main(){
    cin >> a;
    if(a%4 == 0){
        if(a%100 == 0){
            if(a%400 == 0) bis = true;
            else bis = false;
        } else bis = true;
    }
    if(bis) cout << "SI";
    else cout << "NO";
}
