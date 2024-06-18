#include<iostream>
#include<vector>
using namespace std;

int t;
vector<int> baseList;

int isBigger(int x, int y){
    if(x > y) return x;
    return y;
}

int main(){
    cin >> t;
    vector<int> testX(t);
    vector<int> testY(t);
    for(int i = 0; i < t; i++){
        cin >> testX[i];
        cin >> testY[i];
    }
    for(int i = 0; i < t; i++){
        if(baseList.size() <= isBigger(testX[i], testY[i])){
            
        }
    }
}
