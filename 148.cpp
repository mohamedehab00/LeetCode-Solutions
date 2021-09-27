#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
ListNode* sortList(ListNode* head) {
    if(head == nullptr ){
        return head;
    }
    priority_queue<int> que;
    while (head != nullptr){
        que.push(head->val);
        head = head->next;
    }
    ListNode* new_head = new ListNode(que.top(),nullptr);
    que.pop();
    while (!que.empty()){
        ListNode* temp = new ListNode(new_head->val, new_head->next);
        new_head->val=que.top();
        new_head->next = temp;
        que.pop();
    }
    return new_head;
}
int main() {
    ListNode* root=new ListNode(10,new ListNode(1,new ListNode(3,new ListNode(5, nullptr))));
    root = sortList(root);
    while (root != nullptr){
        cout<<root->val<<" ";
        root = root->next;
    }
    return 0;
}
