#include <bits/stdc++.h>
using namespace std;
int guess(int num,int pick){
    if(num == pick){
        return 0;
    } else if(num > pick){
        return -1;
    }
    else{
        return 1;
    }
}
int binary_Search(int l, int r){
    if (r >= l) {
        int mid = l + (r - l) / 2;
        int res = guess(mid,6);
        if (res==0){
            return mid;
        }
        if (res== -1){
            return binary_Search(l, mid - 1);
        }
        else{
            return binary_Search(mid + 1, r);
        }
    }
    return -1;
}
int guessNumber(int n) {
    return binary_Search(1,n);
}

int main()
{
    //vector<vector<int>> boxTypes = {{5,10}, {2,5}, {4,7},{3,9}};
    cout<<guessNumber(10);
}