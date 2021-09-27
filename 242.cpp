#include <bits/stdc++.h>
using namespace std;

bool isAnagram(string s, string t) {
    if(s.size() != t.size()){
        return false;
    }
    set<char> s_temp;
    map<char,int> s_dict,t_dict;

    for (int i = 0; i < s.size(); ++i) {
        s_temp.insert(s[i]);
        s_dict[s[i]]++;
    }
    for (int i = 0; i < t.size(); ++i) {
        t_dict[t[i]]++;
    }
    for (const auto &temp : s_temp) {
        if(s_dict[temp] != t_dict[temp]){
            return false;
        }
    }
    return true;
}
int main()
{
    //vector<vector<int>> boxTypes = {{5,10}, {2,5}, {4,7},{3,9}};
    cout<<isAnagram("aacc","ccca");
}