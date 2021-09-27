#include <bits/stdc++.h>
using namespace std;

bool canPlaceFlowers(vector<int>& flowerbed, int n) {
    if(flowerbed.size() == 1 && flowerbed[0] == 0 && n == 1){
        return true;
    }
    int count = 0;
    for (int i = 0; i < flowerbed.size();++i) {
        if(flowerbed[i]==0 && (i==0 || flowerbed[i-1]==0) && (i == flowerbed.size()-1 || flowerbed[i+1]== 0)){
            flowerbed[i]=1;
            count++;
        }
    }
    if(count >= n){
        return true;
    }
    else{
        return false;
    }
}

int main()
{
    vector<int> arr = {1,0,0,0,1};
    cout<<canPlaceFlowers(arr,2);
}