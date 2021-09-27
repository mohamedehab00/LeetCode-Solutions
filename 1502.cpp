#include <bits/stdc++.h>
using namespace std;

bool canMakeArithmeticProgression(vector<int>& arr) {
    sort(arr.begin(),arr.end());
    int prev = -1;
    for (int i = 1; i < arr.size(); ++i) {
        if(prev == -1){
            prev = arr[i]-arr[i-1];
        }
        else{
            if(prev == (arr[i]-arr[i-1])){
                prev = arr[i]-arr[i-1];
            } else{
                return false;
            }
        }
    }
    return true;
}

int main()
{
    vector<int> arr = {3,1,5};
    cout<<canMakeArithmeticProgression(arr);
}