#include <bits/stdc++.h>
using namespace std;

int minOperations(vector<int>& nums) {
    int start_val,start_idx;
    int mini = 0;

    if(nums.size() == 1){
        return 0;
    }
    else{
        for (int i = 1; i < nums.size(); ++i) {
            if(nums[i-1] >= nums[i]){
                start_val = nums[i-1]+1;
                start_idx = i;
                break;
            }
        }
        for (int i = start_idx; i < nums.size(); ++i) {
            if(nums[i]>start_val){
                start_val = nums[i]+1;
            }
            else{
                mini += (start_val-nums[i]);
                start_val+=1;
            }
        }
        return mini;
    }
}

int main()
{
    vector<int> arr = {1,5,2,4,1};
    cout<<minOperations(arr);
}