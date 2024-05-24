#include <string>
#include <vector>
#include<algorithm>

using namespace std;

vector<int> robosort(vector<int> &muestras) {
    vector<int> result(muestras.size());
    for(int i = 0; i < muestras.size(); ++i){
        int pos = i;
        int minimo = muestras[i];
        for(int j = i; j < muestras.size(); ++j){
            if(muestras[j]<minimo)
                {
                minimo=muestras[j];
                pos=j;
                }
        }
        result[i] = pos+1;

        reverse(muestras.begin()+i, muestras.begin()+pos+1);
    }
    return result;
}
