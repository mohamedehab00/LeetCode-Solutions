#include <bits/stdc++.h>
using namespace std;

int totalMoney(int n) {
    int days = 0;
    int start = 0;
    int last_start = start;
    int res = 0;
    while (days < n){
        if(days % 7 == 0){
            last_start+=1;
            start = last_start;
        }
        res+=start++;
        days+=1;
    }
    return res;
}

int main()
{
    vector<int> Input = {1,1,1,1,2,2,3,3,3,4,4,4,4,4,4,1};
    cout<<totalMoney(20);
}