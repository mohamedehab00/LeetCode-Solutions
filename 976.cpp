#include <bits/stdc++.h>
using namespace std;

int largestPerimeter(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    int sum = 0;
    for (int i = nums.size()-1; i > 1; --i) {
        if(nums[i]< nums[i-1] + nums[i-2]){
            sum = nums[i] + nums[i-1] + nums[i-2];
            break;
        }
    }
    return sum;
}

int main()
{
    vector<int> arr = {3,6,2,3};
    int per = largestPerimeter(arr);
    cout<<per;
}