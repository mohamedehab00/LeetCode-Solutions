#include <bits/stdc++.h>
using namespace std;

vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
    vector<int> sorted;
    for (int i = 0; i < arr2.size(); ++i) {
        for (int j = 0; j < arr1.size(); ++j) {
            if(arr1[j] == arr2[i]){
                sorted.push_back(arr2[i]);
                arr1[j] = -1;
            }
        }
    }
    sort(arr1.begin(),arr1.end());
    for (int i = 0; i < arr1.size(); ++i) {
        if(arr1[i] != -1){
            continue;
        }
        sorted.push_back(arr1[i]);
    }
    return sorted;
}

int main()
{
    vector<int> arr = {2,3,1,3,2,4,6,7,9,2,19};
    vector<int> arr1 = {2,1,4,3,9,6};
    relativeSortArray(arr,arr1);
}