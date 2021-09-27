#include <bits/stdc++.h>
using namespace std;

int bagOfTokensScore(vector<int>& tokens, int power) {
    sort(tokens.begin(),tokens.end());
    int score = 0;
    int i = 0;
    int j = tokens.size()-1;
    while (i <= j && (power >= tokens[i] || score > 0)){
        if(power >= tokens[i]){
            power -= tokens[i];
            score++;
            i++;
        } else if(score > 0 && j-1 > i){
            score--;
            power+= tokens[j];
            j--;
        } else{
            break;
        }
    }
    return score;
}

int main()
{
    vector<int> Input = {100,200};
    int ans = bagOfTokensScore(Input,150);
    cout<<ans;
}