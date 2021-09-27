#include <bits/stdc++.h>
using namespace std;
static bool comp(vector<int> arr,vector<int> arr1){
    if(arr[2]>=arr1[2]){
        return false;
    } else{
        return true;
    }
}
vector<vector<int>> allCellsDistOrder(int rows, int cols, int rCenter, int cCenter) {
    vector<vector<int>> Points;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            vector<int> temp;
            temp.push_back(i);
            temp.push_back(j);
            Points.push_back(temp);
        }
    }
    for (int i = 0; i < Points.size(); ++i) {
        Points[i].push_back(abs(rCenter-Points[i][0]) + abs(cCenter-Points[i][1]));
    }
    sort(Points.begin(),Points.end(), comp);
    for (int i = 0; i < Points.size(); ++i) {
        Points[i].pop_back();
    }
    return Points;
}

int main()
{
    //vector<vector<int>> boxTypes = {{5,10}, {2,5}, {4,7},{3,9}};
    allCellsDistOrder(2,3,1,2);
}