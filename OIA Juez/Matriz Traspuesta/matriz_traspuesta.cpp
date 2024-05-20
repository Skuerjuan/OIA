#include<iostream>
#include<vector>
using namespace std;

int filas;
int columnas;

int main(){
    cin >> filas >> columnas;
    int mat[filas][columnas];
    int mat2[columnas][filas];
    for(int i = 0; i < filas; ++i){
        for(int j = 0; j < columnas; ++j){
            cin >> mat[i][j];
            mat2[j][i] = mat[i][j];
        }
    }



    for(int i = 0; i < columnas; ++i){
        for(int j = 0; j < filas; ++j){
            cout << mat2[i][j] << " ";
        }
        cout << endl;
    }
}
