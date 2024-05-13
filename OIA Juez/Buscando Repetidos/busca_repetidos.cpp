#include<iostream>
#include<string>
#include<vector>
using namespace std;

vector<int> list;
bool rep;
int n;

bool isNotRepetido(int a){
    int count = 0;
    for(int i : list){
        if(i == a)
            count++;
    }
    return count == 1;
}

int main(){
    for(;;){
        cin >> n;
        if(n == 0)
            break;
        list.push_back(n);
    }
    for(int i : list){
        if(!isNotRepetido(i)){
            rep = true;
            cout << "Hay repetidos";
            break;
        }
    }
    if(!rep)
        cout << "No hay repetidos";
}
