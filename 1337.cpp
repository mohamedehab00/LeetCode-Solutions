#include <bits/stdc++.h>
using namespace std;

vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
    int m = mat[0].size();
    vector<int> sol;
    vector<int> MIN;
    for (int i = 0; i < mat.size(); ++i) {
        int pos =(mat[i].rend()-1) - lower_bound(mat[i].rbegin(),mat[i].rend(),1);
        if(pos >= 0 && mat[i][pos]==1){
            sol.push_back(pos+1);
        } else{
            sol.push_back(0);
        }
    }
    for (int i = 0; i < k; ++i) {
        int min = INT_MAX;
        int min_idx;
        for (int j = 0; j < sol.size(); ++j) {
            if(sol[j] < min){
                min = sol[j];
                min_idx = j;
            }
        }
        sol[min_idx]=INT_MAX;
        MIN.push_back(min_idx);
    }
    return MIN;
}

int main() {
    vector<vector<int>> mat = {{1,1,0,0,0},
                               {1,1,1,1,0},
                               {0,0,0,0,0},
                               {1,1,0,0,0},
                               {1,1,1,1,1}};
    vector<int> res = kWeakestRows(mat,3);
    for (int i = 0; i < res.size(); ++i) {
        cout<<res[i]<<" ";
    }
    return 0;
}
