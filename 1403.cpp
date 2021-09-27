#include <bits/stdc++.h>
using namespace std;

vector<int> minSubsequence(vector<int>& nums) {
    vector<int> Ans;
    vector<int> prefix(nums.size());
    sort(nums.rbegin(),nums.rend());
    prefix[0] = nums[0];
    for (int i = 1; i < nums.size(); ++i) {
        prefix[i] = prefix[i-1]+nums[i];
    }
    for (int i = 0; i < nums.size(); ++i) {
        int After = prefix[nums.size()-1] - prefix[i];
        if(prefix[i]>After){
            for (int j = 0; j <= i; ++j) {
                Ans.push_back(nums[j]);
            }
            break;
        }
    }
    prefix.clear();
    return Ans;
}

int main()
{
    vector<int> arr = {4,3,10,9,8};
    vector<int> res = minSubsequence(arr);
}