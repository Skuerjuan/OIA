#include<iostream>
#include<vector>
using namespace std;

long long n;
long long moves;

int main(){
    cin >> n;
    vector<long long> list(n);
    for(long long i = 0; i < n; i++) cin >> list[i];
    for(long long i = 1; i < n; i++){
        if(list[i] < list[i-1]){
             moves += list[i-1] - list[i];
             list[i] = list[i-1];
        }
    }
    cout << moves;
}