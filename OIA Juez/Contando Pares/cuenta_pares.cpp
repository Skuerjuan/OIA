#include<iostream>
#include<vector>
using namespace std;

int x;
int c;
int o;
int o2;
bool del;

int main(){
    cin >> x;
    vector<int> l(x);

    for(int i = 0; i < x; ++i)
        cin >> l[i];

    for(int i = 0; i < x; ++i){

        if(del){
            if(i == o || i == o2) i++;
            del = false;
        }

        for(int j = i + 1; j < x; ++j){
            if((l[i] + l[j]) % 2 == 0){
                ++c;
                del = true;
                o = j;
                o2 = i;
                cout << o << j << "  " << o2 << i << endl;
                break;
            }
        }
    }
    cout << c;
}


