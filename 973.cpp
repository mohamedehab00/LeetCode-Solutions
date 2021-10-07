#include <bits/stdc++.h>
using namespace std;

bool comp(vector<int> point1, vector<int> point2){
    double dist1 = sqrt(pow(point1[0],2)+ pow(point1[1],2));

    double dist2 = sqrt(pow(point2[0],2)+ pow(point2[1],2));

    if(dist1 > dist2){
        return false;
    } else{
        return true;
    }
}

vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
    vector<vector<int>> ans;
    sort(points.begin(),points.end(),comp);
    for (int i = 0; i < k; ++i) {
        ans.push_back(points[i]);
    }
    return ans;
}

int main()
{
    vector<vector<int>> Input = {{1,3},{-2,2}};
    kClosest(Input,1);
}