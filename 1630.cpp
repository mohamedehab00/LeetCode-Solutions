#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr,int low, int high){
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j < high; ++j) {
        if(arr[j]<pivot){
            i += 1;
            swap(arr[j],arr[i]);
        }
    }
    swap(arr[i+1],arr[high]);
    return i+1;
}
void quick_sort(vector<int> &arr, int low, int high){
    if(low < high){
        int pi = partition(arr,low,high);
        quick_sort(arr,low,pi-1);
        quick_sort(arr,pi+1,high);
    }
}

bool check_Sequence(int start, int end, vector<int>& nums){
    quick_sort(nums,start,end);
    int diff = nums[start+1] - nums[start];
    for (int i = start; i < end; ++i) {
        if(nums[i+1] - nums[i] != diff){
            return false;
        }
    }
    return true;
}

vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
    vector<bool> ans;
    vector<int> temp;
    for (int i = 0; i < l.size(); ++i) {
        temp = nums;
        ans.push_back(check_Sequence(l[i],r[i],temp));
    }
    return ans;
}

int main()
{
    vector<int> arr = {4,6,5,9,3,7};
    vector<int> l = {0,0,2};
    vector<int> r = {2,3,5};
    vector<bool> ans = checkArithmeticSubarrays(arr,l,r);
    for (const auto &item : ans) {
        cout<<item<<" ";
    }
}