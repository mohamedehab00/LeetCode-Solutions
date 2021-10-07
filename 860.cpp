#include <bits/stdc++.h>
using namespace std;

bool lemonadeChange(vector<int>& bills) {
    map<int , int> BILLS;
    int pointer = 1;
    if(bills[0] > 5){
        return false;
    }
    BILLS[5]++;
    while (pointer < bills.size()){
        switch (bills[pointer]) {
            case 5:
                BILLS[5]++;
                break;
            case 10:
                if(BILLS[5]){
                    BILLS[10]++;
                    BILLS[5]--;
                } else{
                    return false;
                }
                break;
            case 20:
                if(BILLS[5] && BILLS[10]){
                    BILLS[20]++;
                    BILLS[10]--;
                    BILLS[5]--;
                }
                else if(BILLS[5] >= 3){
                    BILLS[5]-=3;
                    BILLS[20]++;
                }
                else{
                    return false;
                }
                break;
        }
        pointer++;
    }
    return true;
}

int main()
{
    vector<int> g = {1,2};
    vector<int> s = {5,5,10,10,20};
    cout<<lemonadeChange(s);
}