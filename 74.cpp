#include <bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
    for (int i = 0; i < matrix.size(); ++i) {
        if(binary_search(matrix[i].begin(),matrix[i].end(),target)){
            return true;
        }
    }
    return false;
}
int main()
{
    vector<int> arr = {2,0,2,1,1,0};
}