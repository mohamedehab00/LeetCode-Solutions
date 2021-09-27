#include <bits/stdc++.h>
using namespace std;


int majorityElement(vector<int>& nums) {
    map<int,int> freq;
    for (int i = 0; i < nums.size(); ++i) {
        freq[nums[i]]+=1;
    }
    int Max = INT_MIN;
    int Max_num;
    for (const auto &item : freq) {
        if(item.second > Max){
            Max = item.second;
            Max_num = item.first;
        }
    }
    return Max_num;
}

int main()
{
    vector<int> ele = {2,2,1,1,1,2,2};
    cout<<majorityElement(ele);
}