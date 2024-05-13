#include<iostream>
using namespace std;

int n;

bool isPerfect(int a){
    int sum = 0;
    for(int i = 1; i < a; ++i){
        if(a%i == 0)
            sum += i;
    }
    return sum == a;
}

int main(){
    cin >> n;
    for(int i = 6; i <= n; ++i){
        if(isPerfect(i))
            cout << i << endl;
    }
}


