#include<iostream>
#include<string>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int p;
int c;
int t;
vector<int> input;

int dist(int a){
    return abs(a - c);
}

int main(){
    cin >> p;
    cin >> c;

    for(int i = 0; i < p; ++i){
        cin >> t;
        input.push_back(t);
    }

    sort(input.begin(), input.end());
    if(p == 1) cout << input[0];

    else if(c < input[0]) cout << dist(input[p-1]);

    else if(c > input[p-1]) cout << dist(input[0]);

    else cout << dist(input[0]) + dist(input[p - 1]);
}


