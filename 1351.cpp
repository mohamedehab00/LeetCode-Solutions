#include <bits/stdc++.h>
using namespace std;

int countNegatives(vector<vector<int>>& grid) {
    int neg = 0;
    int m = grid[0].size();
    for (int i = 0; i < grid.size(); ++i) {
        int pos = (grid[i].rend()-1) - lower_bound(grid[i].rbegin(),grid[i].rend(),0);
        neg += (m - (pos+1));
    }
    return neg;
}

int main() {
    vector<vector<int>> grid = {{1,-1},{-1,-1}};
    cout<<countNegatives(grid);
    return 0;
}
