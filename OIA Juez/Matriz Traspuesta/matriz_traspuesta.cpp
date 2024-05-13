#include<iostream>
#include<vector>
using namespace std;

int n;
int m;

int main(){
    cin >> n >> m;
    int mat[m][n];
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            cin >> mat[j][i];
            //cout << j << " " << i << endl;
        }
    }
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            cout << mat[i][j] << " ";
        }
        cout << endl;

    }
}
