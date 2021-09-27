#include <bits/stdc++.h>
using namespace std;

int arrangeCoins(int n) {
    unsigned long long i = 1;
    while((i*(i+1))/2 <= n){
        i+=1;
    }
    return i-1;
}

int main()
{
    //vector<vector<int>> boxTypes = {{5,10}, {2,5}, {4,7},{3,9}};
    cout<<arrangeCoins(8);
}