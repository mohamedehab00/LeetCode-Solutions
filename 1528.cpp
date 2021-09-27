#include <bits/stdc++.h>
using namespace std;

string restoreString(string s, vector<int>& indices) {
    vector<char> temp(indices.size());
    for (int i = 0; i < indices.size(); ++i) {
        temp[indices[i]] = s[i];
    }
    string NEW(temp.begin(),temp.end());
    return NEW;
}

int main() {
    string s = "abc";
    vector<int> indices = {0,1,2};
    cout<<restoreString(s,indices);
    return 0;
}
