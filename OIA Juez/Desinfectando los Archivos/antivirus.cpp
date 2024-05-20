#include<bits/stdc++.h>
using namespace std;

int N;
string text;
char lett1;
char lett2;

int main(){
    cin >> N >> lett1 >> lett2;
    cin >> text;
    for(int i = 0; i < text.length(); ++i){
        if(text[i] == lett1 && text[i+1] == lett2 && text[i+2] == lett1){
                text.erase(text.begin() + i+1);
                i++;
        }
    }
    cout << text.length() << endl;
    cout << text;
}
