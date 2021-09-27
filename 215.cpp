#include <bits/stdc++.h>
using namespace std;

int findKthLargest(vector<int>& nums, int k) {
    priority_queue<int> que;
    for (int i = 0; i < nums.size(); ++i) {
        que.push(nums[i]);
    }
    int curr;
    while (k>0){
        curr = que.top();
        que.pop();
        k--;
    }
    return curr;
}

int main()
{
    vector<int> arr = {1,3,5,6};
    cout<<findKthLargest(arr,2);
}