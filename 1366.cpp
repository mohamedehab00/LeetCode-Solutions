#include <bits/stdc++.h>
using namespace std;

bool comp(pair<char,vector<int>> PAIRS1 , pair<char,vector<int>> PAIRS2){
    for (int i = 0; i < PAIRS1.second.size(); ++i) {
        if(PAIRS1.second[i] == PAIRS2.second[i]){
            continue;
        } else if(PAIRS1.second[i] > PAIRS2.second[i]){
            return false;
        } else{
            return true;
        }
    }
    if(PAIRS1.first < PAIRS2.first){
        return false;
    } else{
        return true;
    }
}

string rankTeams(vector<string>& votes) {
    string All_Votes = "";
    map<char,vector<int>> DICT;
    for (int i = 0; i < votes[0].size(); ++i) {
        vector<int> temp(votes[0].size(),0);
        DICT[votes[0][i]] = temp;
        DICT[votes[0][i]][i%votes[0].size()] += 1;
    }
    for (int i = 1; i < votes.size(); ++i) {
        for (int j = 0; j < votes[i].size(); ++j) {
            DICT[votes[i][j]][j%votes[i].size()] += 1;
        }
    }
    vector<pair<char,vector<int>>> PAIRS;
    for (int i = 0; i < votes[0].size(); ++i) {
        PAIRS.push_back(pair<char,vector<int>>(votes[0][i],DICT[votes[0][i]]));
    }
    sort(PAIRS.begin(),PAIRS.end(),comp);
    int i = PAIRS.size()-1;
    while (i >= 0){
        All_Votes+=PAIRS[i--].first;
    }
    return All_Votes;
}

int main()
{
    vector<string> rets = {"ABC","ACB","ABC","ACB","ACB"};
    string ans = rankTeams(rets);
    cout<<ans;
}