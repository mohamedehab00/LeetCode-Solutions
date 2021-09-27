#include <bits/stdc++.h>
using namespace std;

vector<int> sortArrayByParityII(vector<int>& nums) {
    for (int i = 0; i < nums.size()-1; ++i) {
        if(i%2==0){
            if(nums[i] % 2!=0){
                for (int j = i; j < nums.size(); ++j) {
                    if(nums[j]%2 == 0 && j%2 != 0){
                        int temp = nums[j];
                        nums[j] = nums[i];
                        nums[i] = temp;
                        break;
                    }
                }
            }
        }
        else{
            if(nums[i]%2==0){
                for (int j = i; j < nums.size(); ++j) {
                    if(nums[j]%2 != 0 && j%2 == 0){
                        int temp = nums[j];
                        nums[j] = nums[i];
                        nums[i] = temp;
                        break;
                    }
                }
            }
        }
    }
    for (int i = 0; i < nums.size(); ++i) {
        cout<<nums[i]<<" ";
    }
}

int main()
{
    vector<int> arr = {2,3};
    sortArrayByParityII(arr);
}