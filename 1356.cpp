#include <bits/stdc++.h>
using namespace std;

int count_ones(int num){
    int count = 0;
    while (num > 0){
        if(num % 2 == 1){
            count++;
        }
        num /= 2;
    }
    return count;
}
bool comp(int num1 , int num2){
    int res1 =count_ones(num1),res2 = count_ones(num2);
    if(res1 > res2){
        return false;
    }else if(res1 == res2){
        if(num1 > num2){
            return false;
        }
        return true;
    } else{
        return true;
    }
}
vector<int> sortByBits(vector<int>& arr) {
    sort(arr.begin(),arr.end(),comp);
    return arr;
}

int main()
{
    vector<int> arr = {91,4,64,78};
    sortByBits(arr);
}