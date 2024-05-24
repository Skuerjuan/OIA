#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int N;
string text;
char lett1;
char lett2;
string line;

int main(){
    ifstream originalText ("antivirus.in");

    if(originalText.is_open()){
        while(getline(originalText, line)){
            cout << line << endl;
        }
    }
}
/*     for(int i = 0; i < text.length(); ++i){
        if(text[i] == lett1 && text[i+1] == lett2 && text[i+2] == lett1){
                text.erase(text.begin() + i+1);
                i++;
        }
    }
    cout << text.length() << endl;
    cout << text;
} */