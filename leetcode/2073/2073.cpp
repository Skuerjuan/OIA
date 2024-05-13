#include <iostream>
#include <vector>
using namespace std;

int timeRequiredToBuy(vector<int>& tickets, int k) {
        int timeTaken = 0;
        int ticketSum = 0;
        for(int i : tickets)
            ticketSum += tickets[i];

        for(;;){
            for(int i : tickets){
                if(i <= 0)
                    continue;
                tickets[i]--;
                timeTaken++;
                ticketSum--;
            }
            if(ticketSum == 0)
                break;
        }
        return timeTaken;
    }

    int main(){
        int a = 2;
        vector<int> b = {2,3,2};
        cout << timeRequiredToBuy(b, a);
    }
