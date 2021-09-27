#include <bits/stdc++.h>
using namespace std;

void BINARY_SEARCH(int l, int r, vector<int> arr,vector<int>&idx, priority_queue<int>&MX,  priority_queue<int ,vector<int>, greater<int>> &MN, int target){
    if(l <= r){
        int mid = l + (r-l) / 2;
        if(binary_search(idx.begin(),idx.end(),mid)){
            return;
        }
        if(arr[mid] == target){
            idx.push_back(mid);
            MX.push(mid);
            MN.push(mid);
        }
        if(arr[mid] > target ||(mid-1 >= 0 && arr[mid-1] == target)){
            BINARY_SEARCH(l,mid-1,arr,idx,MX,MN,target);
        }
        if (arr[mid] < target || (mid+1 < arr.size() && arr[mid+1] == target)){
            BINARY_SEARCH(mid+1,r,arr,idx,MX,MN,target);
        }
    }
}
vector<int> searchRange(vector<int>& nums, int target) {
    priority_queue<int> MX;
    priority_queue<int ,vector<int>, greater<int>> MN;
    vector<int> temp;
    BINARY_SEARCH(0,nums.size()-1,nums,temp,MX,MN,target);
    vector<int> idx(2);
    if(MX.size() <= 0 || MN.size() <= 0){
        idx[0] = -1;
        idx[1] = -1;
    }else{
        idx[0] = MN.top();
        idx[1] = MX.top();
    }
    return idx;
}
int main()
{
    vector<int> arr = {3,3};
    vector<int> idx = searchRange(arr,3);
    for (const auto &item : idx) {
        cout<<item<<" ";
    }
}