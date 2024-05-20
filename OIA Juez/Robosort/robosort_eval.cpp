#include <iostream>
#include <string>
#include <vector>
#include "algo.cpp"

using namespace std;

vector<int> robosort(vector<int> &muestras);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;
    cin >> N;
    vector<int> muestras;
    muestras.resize(N);
    for (int i0 = 0; i0 < N; i0++) {
        cin >> muestras[i0];
    }
    vector<int> returnedValue;
    returnedValue = robosort(muestras);
    for (int i = 0; i < int(returnedValue.size()); i++) {
        if (i > 0) cout << " ";
        cout << returnedValue[i];
    }
    cout << "\n";
    return 0;
}
