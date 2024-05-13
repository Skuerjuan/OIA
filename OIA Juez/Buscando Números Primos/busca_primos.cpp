#include<iostream>
using namespace std;

int n;

bool isPrimo(int a){
    for(int i = 2; i < a; ++i){
        if(a%i == 0)
            return false;
    }
    return true;
}

int main(){
    cin >> n;
    for(int i = 2; i <= n; ++i){
        if(isPrimo(i))
            cout << i << endl;
    }
}
