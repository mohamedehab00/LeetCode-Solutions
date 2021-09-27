#include <bits/stdc++.h>
using namespace std;

string sortSentence(string s) {
    int words = 0;
    for (int i = 0; i < s.size(); ++i) {
        if(s[i]==' '){
            words+=1;
        }
    }
    words+=1;
    map<char,string> dict;
    string temp = "";
    for (int i = 0; i < s.size(); ++i) {
        if(isalpha(s[i])){
            temp+=s[i];
        }
        else if(s[i]==' '){
            temp = "";
        }
        else{
            dict[s[i]]=temp;
        }
    }
    temp = "";
    for (int i = 49; i < 49+words; ++i) {
        char key = i;
        if(i == 49){
            temp+=dict[key];
            continue;
        }
        temp+=" "+dict[key];
    }
    dict.clear();
    return temp;
}

int main() {
    string s = "Myself2 Me1 I4 and3";
    cout<<sortSentence(s);
    return 0;
}
