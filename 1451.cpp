#include <bits/stdc++.h>
using namespace std;

void Slice(string text, vector<pair<string,int>> &arr){
    string temp = "";
    int word = 0;
    pair<string,int> pair;
    for (int i = 0; i < text.size(); ++i) {
        if(text[i] != ' '){
            temp.push_back(tolower(text[i]));
        } else{
            word+=1;
            pair.first = temp;
            pair.second = word;
            arr.push_back(pair);
            temp = "";
        }
    }
    word+=1;
    pair.first = temp;
    pair.second = word;
    arr.push_back(pair);
}

bool comp(pair<string , int>pair1, pair<string , int>pair2){
    if(pair1.first.size() >= pair2.first.size()){
        if(pair1.first.size() == pair2.first.size()){
            return pair1.second < pair2.second;
        }
        return false;
    } else{
        return true;
    }
}

string arrangeWords(string text) {
    vector<pair<string,int>> arr;
    Slice(text,arr);
    sort(arr.begin(),arr.end(),comp);
    string ans = "";
    for (int i = 0; i < arr.size(); ++i) {
        if(i == arr.size()-1){
            ans+=arr[i].first;
        }
        else{
            ans+=arr[i].first+" ";
        }
    }
    ans[0] = toupper(ans[0]);
    return ans;
}

int main()
{
    
    cout<<arrangeWords("Leetcode is cool");

}