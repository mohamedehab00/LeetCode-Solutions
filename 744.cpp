#include <bits/stdc++.h>
using namespace std;

char nextGreatestLetter(vector<char>& letters, char target) {
    auto item = upper_bound(letters.begin(),letters.end(),target);
    if(item!= letters.end()){
        return *item;
    }
    return letters[0];
}

int main()
{
    vector<char> arr = {'a','c'};
    cout<<nextGreatestLetter(arr,'z');
}