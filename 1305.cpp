#include <bits/stdc++.h>
using namespace std;


struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
void bfs(vector<int> &arr,TreeNode* root){
    queue<TreeNode*> que;
    if(root == nullptr){
        return;
    }
    que.push(root);
    while (!que.empty()){
        arr.push_back(que.front()->val);
        if(que.front()->right != nullptr){
            que.push(que.front()->right);
        }
        if(que.front()->left != nullptr){
            que.push(que.front()->left);
        }
        que.pop();
    }
}
vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
    vector<int>arr;
    bfs(arr,root1);
    bfs(arr,root2);
    sort(arr.begin(),arr.end());
    return arr;
}


int main()
{
    vector<int> arr = {3,1,5};
    cout<<canMakeArithmeticProgression(arr);
}