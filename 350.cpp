#include <bits/stdc++.h>
using namespace std;

vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
    vector<int> nums;
    map<int,int> dict1,dict2;
    for (int i = 0; i < nums1.size(); ++i) {
        dict1[nums1[i]]++;
    }
    for (int i = 0; i < nums2.size(); ++i) {
        dict2[nums2[i]]++;
    }
    for (const auto &item : dict1) {
        if(item.second > 0 && dict2[item.first] > 0){
            for (int i = 0; i < min(item.second,dict2[item.first]); ++i) {
                nums.push_back(item.first);
            }
        }
    }

    return nums;
}

int main()
{
    vector<int> arr = {4,9,5};
    vector<int> arr1 = {9,4,9,8,4};
    intersect(arr,arr1);
}