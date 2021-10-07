#include <bits/stdc++.h>
using namespace std;

int findContentChildren(vector<int>& g, vector<int>& s) {
    sort(g.begin(),g.end());
    sort(s.begin(),s.end());
    int count = 0;
    for (int i = 0; i < g.size(); ++i) {
        auto item = lower_bound(s.begin(),s.end(),g[i]);
        if(item != s.end()){
            count++;
            s.erase(item);
        }
        else{
            continue;
        }
    }
    return count;
}

int main()
{
    vector<int> g = {1,2};
    vector<int> s = {1,2,3  };
    cout<<findContentChildren(g,s);
}