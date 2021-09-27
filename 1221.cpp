#include <bits/stdc++.h>
using namespace std;

int balancedStringSplit(string s) {
    int R = 0;
    int L = 0;
    int tot = 0;
    for (int i = 0; i < s.size(); ++i) {
        if(s[i]=='R'){
            R+=1;
        } else{
            L+=1;
        }
        if(R==L){
            tot++;
            R=0;
            L=0;
        }
    }
    return tot;
}

int main() {
    balancedStringSplit("RLRRRLLRLL");
    return 0;
}
