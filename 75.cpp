#include <bits/stdc++.h>
using namespace std;

int partition(vector<int>& nums,int low,int high){
    int pivot = nums[high];
    int i = low - 1;

    for (int j = low; j <= high-1; ++j) {
        if(nums[j] < pivot){
            i++;
            int temp = nums[j];
            nums[j] = nums[i];
            nums[i] = temp;
        }
    }
    int temp = nums[high];
    nums[high] = nums[i+1];
    nums[i+1] = temp;

    return i+1;
}
void quick_sort(vector<int>& nums,int low,int high){
    if(low < high){
        int pi = partition(nums,low,high);
        quick_sort(nums,low,pi-1);
        quick_sort(nums,pi+1,high);
    }
}

void sortColors(vector<int>& nums) {
    quick_sort(nums,0,nums.size()-1);
}

int main()
{
    vector<int> arr = {2,0,2,1,1,0};
    sortColors(arr);
    for (int i = 0; i < arr.size(); ++i) {
        cout<<arr[i]<<" ";
    }
}