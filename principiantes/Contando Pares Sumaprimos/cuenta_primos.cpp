#include<bits/stdc++.h>
using namespace std;

int x;
int c;
vector<int> result;

bool isPrime(int a){
    for(int i = 2; i < a; ++i){
        if(a % i == 0) return false;
    }
    return true;
}

int main(){
    cin >> x;
    vector<int> lista(x);

    for(int i = 0; i < x; ++i) cin >> lista[i];

    for(int i = 0; i < x; ++i){
            if(x == 1 && isPrime(lista[0])) c++;
        for(int j = 0; j < x; ++j){
            if(isPrime(lista[i] + lista[j])){
                c++;
            }
        }
    }
    cout << c/2;
}
/*
4
10
9
2
3
*/


