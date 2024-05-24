#include<iostream>
#include<vector>
#include<map>
using namespace std;

typedef pair<int> team;
vector<int> skill(4,0);
map<int,int> t;
int counter;

int main(){
    cin >> skill[0];
    cin >> skill[1];
    cin >> skill[2];
    cin >> skill[3];

    for(int i = 0; i < 3; ++i){
        for(int j = 0; j < 4; ++j){
            if(i == j)
                continue;
            counter++;
            t.insert(counter, team(i, j));
        }
    }

}
