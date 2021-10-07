#include <bits/stdc++.h>
using namespace std;

int numWaterBottles(int numBottles, int numExchange) {
    int bottels = numBottles;
    int free_bottels = numBottles;
    int rem_bot = 0;
    int total = 0;
    while (bottels > 0){
        total += bottels;
        free_bottels = bottels + rem_bot;
        bottels = free_bottels / numExchange;
        rem_bot = free_bottels % numExchange;
    }
    return total;
}

int main()
{
    vector<int> Input = {1};
    cout<<numWaterBottles(2,3);
}