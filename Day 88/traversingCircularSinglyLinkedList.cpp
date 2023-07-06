#include <bits/stdc++.h>
using namespace std;


class node{
  public:
  int data;
  node* next;

  node(){
    this->data = 0;
    this->next = NULL;
  }

  node(int data){
    this->data = data;
    this->next = NULL;
  }
};

int main() {
  map<node*, int>mp;
  node* first = new node(10);
  node* second = new node(20);
  node* third = new node(30);
  node* fourth = new node(40);
  first->next = second;
  second->next = third;
  third->next = fourth;
  fourth->next = first;

  node* head = first;
  node* temp = head;
  while(mp[temp]!=1){
    cout<<temp->data<<" ";
    mp[temp]++;
    temp=temp->next;
  }
  return 0;
}
