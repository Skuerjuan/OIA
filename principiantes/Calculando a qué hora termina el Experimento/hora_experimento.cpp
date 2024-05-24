#include<iostream>
using namespace std;

int h, m, s, d;

int main(){
    cin >> h >> m >> s;
    cin >> d;
    s += d;
    for(;;){

        if(s >= 60){
            s -= 60;
            ++m;
        }

        if(m >= 60){
            m -= 60;
            ++h;
        }

        if(h >= 24){
            h -= 24;
        }

        if(s < 60) break;
    }
    cout << h << " " << m << " " << s;
}
