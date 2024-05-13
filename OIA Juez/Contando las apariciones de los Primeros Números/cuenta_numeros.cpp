#include<iostream>
#include<string>
#include<vector>
using namespace std;

int n;
int p;
vector<int> l;
vector<int> f(10, 0);

int main(){
    cin >> n;
    for(int i = 0; i < n; ++i){
        cin >> p;
        l.push_back(p);
        switch(p){
        case 1:
            f[0]++;
            break;
        case 2:
            f[1]++;
            break;
        case 3:
            f[2]++;
            break;
        case 4:
            f[3]++;
            break;
        case 5:
            f[4]++;
            break;
        case 6:
            f[5]++;
            break;
        case 7:
            f[6]++;
            break;
        case 8:
            f[7]++;
            break;
        case 9:
            f[8]++;
            break;
        case 10:
            f[9]++;
            break;
        }
    }
    for(int i = 0; i < 10; ++i)
        cout << f[i] << endl;
}
