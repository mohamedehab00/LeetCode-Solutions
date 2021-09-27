#include <bits/stdc++.h>
using namespace std;

int get_min_diff(vector<int> nums){
    int min_ans = INT_MAX;
    min_ans = min(min_ans,nums[nums.size()-1]-nums[3]);
    min_ans = min(min_ans,nums[nums.size()-2]-nums[2]);
    min_ans = min(min_ans,nums[nums.size()-3]-nums[1]);
    min_ans = min(min_ans,nums[nums.size()-4]-nums[0]);
    return min_ans;
}

int minDifference(vector<int>& nums) {
    if(nums.size() < 5){
        return 0;
    }
    else{
        sort(nums.begin(),nums.end());
        return get_min_diff(nums);
    }
}

int main()
{
    vector<int> Input = {9,31,48,48,81,92};
    int ans = minDifference(Input);
    cout<<ans;
}