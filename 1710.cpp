#include <bits/stdc++.h>
using namespace std;
bool comp(vector<int> arr,vector<int> arr1){
    if(arr[1]>=arr1[1]){
        if(arr[1]==arr1[1]){
            if(arr[0]>=arr1[0]){
                return false;
            } else{
                return true;
            }
        }
        return false;
    } else{
        return true;
    }
}
int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
    sort(boxTypes.rbegin(),boxTypes.rend(), comp);
    int Sum = 0;
    int boxes = 0;
    for (int i = 0; i < boxTypes.size(); ++i) {
        if(boxes + boxTypes[i][0] < truckSize){
            boxes+=boxTypes[i][0];
            Sum += (boxTypes[i][0]*boxTypes[i][1]);
        }
        else{
            int rem = truckSize - boxes;
            Sum += (rem*boxTypes[i][1]);
            break;
        }
    }
    return Sum;
}

int main()
{
    vector<vector<int>> boxTypes = {{5,10}, {2,5}, {4,7},{3,9}};
    cout<<maximumUnits(boxTypes,10);
}