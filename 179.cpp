#include <bits/stdc++.h>
using namespace std;


bool lexo_comp(int num1 , int num2){
    string N1 = to_string(num1);
    string N2 = to_string(num2);
    long long ab = stoll(N1+N2);
    long long ba = stoll(N2+N1);

    return ab > ba;
}

string largestNumber(vector<int>& nums) {
    string ans = "";
    sort(nums.begin(),nums.end(), lexo_comp);
    for (const auto &item : nums) {
        ans += to_string(item);
    }
    if(ans[0] == '0'){
        while (ans[0] == '0' && ans.size() > 1){
            ans = ans.substr(1);
        }
    }
    return ans;
}

int main()
{
    vector<int> Input = {0,0};
    cout<<largestNumber(Input);
}