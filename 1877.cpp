#include <bits/stdc++.h>
using namespace std;

int minPairSum(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    int begin = 0;
    int end = nums.size() - 1;
    int Sum = 0;
    while (begin < end){
        Sum = max(Sum,nums[begin++]+nums[end--]);
    }

    return Sum;
}

int main()
{
    vector<int> arr = {3,2,4,1,1,5,1,3,5,1};
    cout<<minPairSum(arr);
}