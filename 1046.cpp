#include <bits/stdc++.h>
using namespace std;

int lastStoneWeight(vector<int>& stones) {
    int ans = stones[0];
    while (stones.size()>1){
        sort(stones.begin(),stones.end());
        int diff = stones[stones.size()-1] - stones[stones.size()-2];
        stones.pop_back();
        stones.pop_back();
        if(diff > 0 || stones.size() == 0){
            stones.push_back(diff);
        }
    }
    ans = stones[0];
    return ans;
}

int main()
{
    vector<int> Input = {1};
    cout<<lastStoneWeight(Input);
}