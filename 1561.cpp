#include <bits/stdc++.h>
using namespace std;

int maxCoins(vector<int>& piles) {
    sort(piles.begin(),piles.end());
    int best_Sum = 0;
    int begin = piles.size()-2;
    for (int i = 0; i < piles.size()/3; ++i) {
        best_Sum += piles[begin];
        begin-=2;
    }
    return best_Sum;
}

int main()
{
    vector<int> arr = {9,8,7,6,5,1,2,3,4};
    cout<<maxCoins(arr);
}