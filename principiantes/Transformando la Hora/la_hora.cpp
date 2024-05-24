#include <iostream>
#include <string>

using namespace std;

string h;
int hNum;
string m;
string input;
string ampm;

int main(){
    ampm = " AM";
    cin >> input;
    h = input.substr(0, 2);
    hNum = stoi(h);
    m = input.substr(2, 3);
    if(hNum > 12){
        ampm = " PM";
        hNum -= 12;
    }
    else if(hNum == 0){
        hNum = 12;
    }
    else if(hNum == 12){
        ampm = " PM";
    }

    h = to_string(hNum);
    if(h.length() == 1)
        h = "0" + h;
    cout << h << m << ampm;
}
