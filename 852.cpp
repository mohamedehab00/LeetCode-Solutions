#include <bits/stdc++.h>
using namespace std;

int peakIndexInMountainArray(vector<int>& arr) {
    vector<int> temp = arr;
    sort(temp.begin(),temp.end());
    int Max = temp[temp.size()-1];
    int pos = -1;
    for (int i = 0; i < arr.size(); ++i) {
        if(arr[i]==Max){
             pos = i;
        }
    }
    return pos;
}

int main()
{
    vector<int> arr = {0,2,1,0};
    cout<<peakIndexInMountainArray(arr);
}