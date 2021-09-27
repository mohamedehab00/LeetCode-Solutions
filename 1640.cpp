#include <bits/stdc++.h>
using namespace std;

bool canFormArray(vector<int>& arr, vector<vector<int>>& pieces) {
    vector<int> temp;
    for (int i = 0; i < arr.size(); ++i) {
        for (int j = 0; j < pieces.size(); ++j) {
            if(arr[i] == pieces[j][0]){
                for (int k = 0; k < pieces[j].size(); ++k) {
                    temp.push_back(pieces[j][k]);
                }
                break;
            }
        }
    }
    if(temp.size() != arr.size()){
        return false;
    }
    else{
        for (int i = 0; i < arr.size(); ++i) {
            if(arr[i] != temp[i]){
                return false;
            }
        }
        return true;
    }
}

int main()
{
    vector<int> arr = {91,4,64,78};
    vector<vector<int>> arr1 = {{78},{4,64},{91}};
    cout<<canFormArray(arr,arr1);
}