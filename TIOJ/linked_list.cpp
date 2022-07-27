#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
#define int long long
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
using namespace std;
struct node {
    int data;
    node *next=nullptr;
};
void push_back(node* &head, node value) {
    node *new_node=new node(value);
    if(head==nullptr) head=new_node;
    else {
        node *ptr=head;
        while(ptr->next!=nullptr) ptr=ptr->next;
        ptr->next=new_node;
    }
}
void print(node* head) {
    node* ptr=head;
    while(ptr!=nullptr) {
        cout<<ptr->data<<'\n';
        ptr=ptr->next;
    }
}
void clear(node* &head) {
    while(head!=nullptr) {
        node* ptr=head;
        head=head->next;
        delete ptr;
    }
}
signed main() {
    fastio;
    return 0;
}