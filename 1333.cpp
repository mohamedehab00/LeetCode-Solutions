#include <bits/stdc++.h>
using namespace std;

bool compRating(vector<int> rest1, vector<int> rest2){
    if(rest1[1] < rest2[1]){
        return false;
    } else{
        if(rest1[1] == rest2[1]){
            return rest1[0] > rest2[0];
        }
        return true;
    }
}
void filter_arr(vector<vector<int>>& restaurants){
    sort(restaurants.begin(),restaurants.end(), compRating);
}

vector<int> filterRestaurants(vector<vector<int>>& restaurants, int veganFriendly, int maxPrice, int maxDistance) {
    filter_arr(restaurants);
    vector<int> ans;
    if(veganFriendly == 0){
        for (int i = 0; i < restaurants.size(); ++i) {
            if(restaurants[i][3] <= maxPrice && restaurants[i][4] <= maxDistance){
                ans.push_back(restaurants[i][0]);
            }
        }
    }
    else{
        for (int i = 0; i < restaurants.size(); ++i) {
            if(restaurants[i][2] == veganFriendly && restaurants[i][3] <= maxPrice && restaurants[i][4] <= maxDistance){
                ans.push_back(restaurants[i][0]);
            }
        }
    }
    return ans;
}

int main()
{
    vector<vector<int>> rets = {{1,4,1,40,10},{2,8,0,50,5},{3,8,1,30,4},{4,10,0,10,3},{5,1,1,15,1}};
    vector<int> ans = filterRestaurants(rets,1,50,10);
    for (const auto &item : ans) {
        cout<<item<<" ";
    }
}