#include <bits/stdc++.h>
using namespace std;

bool checkOnesSegment(string s) {
    int seq = 0;
    int ones = 0;
    for (int i = 0; i < s.size(); ++i) {
        if(s[i] == '1'){
            ones +=1;
        } else{
            if(ones > 0){
                seq += 1;
                ones = 0;
            }
            if(seq >= 2){
                return false;
            }
        }
    }

    if(ones > 0){
        seq += 1;
        ones = 0;
    }

    if(seq >= 2){
        return false;
    }

    return true;
}

int main()
{
    vector<vector<int>> Input = {{1,3},{-2,2}};
    cout<<checkOnesSegment("1001");
}