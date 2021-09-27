#include <bits/stdc++.h>
using namespace std;

double average(vector<int>& salary) {
    double avg;
    sort(salary.begin(),salary.end());
    double Sum = 0,No = 0;
    for (int i = 1; i < salary.size()-1; ++i) {
        Sum+=(double)salary[i];
        No++;
    }
    avg = Sum / No;
    return avg;
}

int main()
{
    vector<int> arr = {4000,3000,1000,2000};
    cout<<average(arr);
}