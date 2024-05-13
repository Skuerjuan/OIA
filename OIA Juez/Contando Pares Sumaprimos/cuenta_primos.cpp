#include<iostream>
#include<vector>
using namespace std;

int x;
int c;
int o;
int o2;
bool del;

bool isPrime(int a){
    for(int i = 0; i < a; ++i){
        if(a % i == 0) return false;
    }
    return true;
}

int main(){
    cin >> x;
    vector<int> l(x);

    for(int i = 0; i < x; ++i)
        cin >> l[i];

    for(int i = 0; i < x; ++i){

        if(del){
            if(i == o || i == o2) i++;
            del = false;
        }

        for(int j = i + 1; j < x; ++j){
            if(isPrime(i + j)){
                ++c;
                del = true;
                o = j;
                o2 = i;
                cout << o << j << "  " << o2 << i << endl;
                break;
            }
        }
    }
    cout << c;
}


