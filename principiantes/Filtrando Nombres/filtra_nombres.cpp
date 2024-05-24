#include<iostream>
#include<string>
#include<cctype>
#include<vector>
using namespace std;

int n;

string mayus(string s){
    for(int i = 0; i < s.length(); ++i){
        if(isupper(s[i])) s[i] = tolower(s[i]);
    }
    return s;
}

int main(){

     cin >> n;
     vector<string> l(n);

     for(int i = 0; i < n; ++i) cin >> l[i];

     for(string x : l){
            x = mayus(x);
            if(x[0] == x[x.length()-1]) cout << x << endl;
     }

}
