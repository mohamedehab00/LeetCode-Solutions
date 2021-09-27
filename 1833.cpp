#include <bits/stdc++.h>
using namespace std;

int maxIceCream(vector<int>& costs, int coins) {
    int Sum = 0,No = 0;
    sort(costs.begin(), costs.end());
    for (int i = 0; i < costs.size(); ++i) {
        if(costs[i] <= coins){
            Sum += costs[i];
            if(Sum <= coins){
                No++;
            } else{
                break;
            }
        }
    }
    return No;
}

int main()
{
    vector<int> arr = {1,6,3,1,2,5};
    cout<<maxIceCream(arr,20);
}