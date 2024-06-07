#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int n;
int inp;

int main(){
    cin >> n;
    vector<int> list(n + 1);
    vector<bool> list2(n + 1);
    for(int i = 1; i < n; i++){
        cin >> list[i];
    }
    for(int i = 1; i < n; i++){
        list2[list[i]] = true;
    }
    for(int i = 1; i <= n; i++){
        if(!list2[i]){

            cout << i;
        }
    }
}