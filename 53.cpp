#include <bits/stdc++.h>
using namespace std;


int maxSubArray(vector<int>& nums) {
    int best = INT_MIN, sum = 0;
    for (int k = 0; k < nums.size(); k++) {
        sum = max(nums[k],sum+nums[k]);
        best = max(best,sum);
    }
    return best;
}

int main()
{
    vector<int> ele = {5,4,-1,7,8};
    cout<<maxSubArray(ele);
}