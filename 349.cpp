#include <bits/stdc++.h>
using namespace std;

vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    set<int> s1(nums1.begin(),nums1.end());
    set<int> s2(nums2.begin(),nums2.end());
    vector<int> inter;
    for (const auto &item : s1) {
        if(binary_search(s2.begin(),s2.end(),item)){
            inter.push_back(item);
        }
    }
    return inter;
}

int main()
{
    vector<int> arr = {4000,3000,1000,2000};
    cout<<average(arr);
}