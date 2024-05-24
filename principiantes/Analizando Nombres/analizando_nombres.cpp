#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

int N;
vector<string> names;
string longest = "";
vector<int> contador;
int max = 0;

int main(){
    cin >> N;
    for(int i = 0; i < N; i++){
        string s;
        cin >> s;
        names.push_back(s);
        if(s.length() >= longest.length())
            longest = s;
    }
cout << longest << "\n";
    for(int i = 0; i < N; i++){
        contador.push_back(0);
        for(int j = 0; j < N; j++){
            if(names[i] == names[j]){
                contador[i]++;
            }
        }
    }
    cout << names[*max_element(contador.begin(), contador.end())];
}
