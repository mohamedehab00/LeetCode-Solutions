#include <bits/stdc++.h>
using namespace std;

bool isSubsequence(string s, string t) {
    int start = 0;
    for (int i = 0; i < t.size(); ++i) {
        if(s[start] == t[i]){
            start++;
            if(start == s.size()){
                break;
            }
        }
    }
    return start == s.size();
}

int main()
{
    //vector<int> Input = {-1000,-1,0,1};
    cout<<isSubsequence("abc","ahbgdc");
}