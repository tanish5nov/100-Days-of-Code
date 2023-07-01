#include <bits/stdc++.h>
using namespace std;

class node{
  public:
  node* prev;
  int data;
  node* next;

  node(){
    this->prev = NULL;
    this->next = NULL;
    this->data = 0;
  }

  node(int data){
    this->data = data;
    this->prev = NULL;
    this->next = NULL;
  }
};

void print(node* &head){
  node* temp = head;
  while(temp!=NULL){
    cout<<temp->data<<" ";
    temp=temp->next;
  }
}

int getLength(node* &head){
  node* temp= head;
  int len=0;
  while(temp!=NULL){
    ++len;
    temp=temp->next;
  }
  return len;
}

int main() {
  node* first = new node(10);
  node* second = new node(20);
  node* third = new node(30);

  first->next = second;
  second->prev = first;

  second->next= third;
  third->prev= second;

  print(first);
  return 0;
}
