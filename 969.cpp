#include <bits/stdc++.h>
using namespace std;

int find(int target ,vector<int> arr){
    for (int i = 0; i < arr.size(); ++i) {
        if(arr[i] == target){
            return i;
        }
    }
    return -1;
}

void flip(int start,int end,vector<int>& arr){
    while (start < end){
        swap(arr[start++],arr[end--]);
    }
}

vector<int> pancakeSort(vector<int>& arr) {
    vector<int> ans;
    for (int i = arr.size(); i > 0; --i) {
        int idx = find(i,arr);
        if(idx == i - 1){
            continue;
        }
        if(idx != 0){
            ans.push_back(idx + 1);
            flip(0,idx,arr);
        }
        ans.push_back(i);
        flip(0,i-1,arr);
    }
    return ans;
}

int main()
{
    vector<int> arr = {9,8,7,6,5,1,2,3,4};
    cout<<maxCoins(arr);
}