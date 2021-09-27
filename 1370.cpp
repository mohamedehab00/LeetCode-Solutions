#include <bits/stdc++.h>
using namespace std;


string sortString(string s) {
    map<char,int> dict;
    set<char> chars;
    for (int i = 0; i < s.length(); ++i) {
        dict[s[i]]++;
        chars.insert(s[i]);
    }
    vector<char> set(chars.begin(),chars.end());

    string X = "";
    while (X.length() < s.length()){
        for (int i = 0; i < set.size() && X.length() < s.length(); ++i) {
            if(dict[set[i]]>0){
                X+=set[i];
                dict[set[i]]--;
            }
            else{
                continue;
            }
        }
        for (int i = set.size()-1; i > -1 && X.length() < s.length(); --i) {
            if(dict[set[i]]>0){
                X+=set[i];
                dict[set[i]]--;
            }
            else{
                continue;
            }
        }
    }
    return X;
}

int main()
{
    sortString("spo");
}