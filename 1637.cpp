#include <bits/stdc++.h>
using namespace std;

int maxWidthOfVerticalArea(vector<vector<int>>& points) {
    sort(points.begin(),points.end());
    int max_dist = 0;
    for (int i = 0; i < points.size()-1; ++i) {
        max_dist = max(points[i+1][0]-points[i][0],max_dist);
    }
    return max_dist;
}

int main()
{
    vector<vector<int>> arr = {{3,1},{9,0}, {1,0}, {1,4},{5,3},{8,8}};
    cout<<maxWidthOfVerticalArea(arr);
}