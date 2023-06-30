#include<bits/stdc++.h>
using namespace std;

class node{
  public:
  int data;
  node *next;

  node(){
    this->data=0;
    this->next=NULL;
  }

  node(int data){
    this->data=data;
    this->next=NULL;
  }
};

void insertAtBeg(node* &head, node* &tail, int data){
  if(head==NULL){
    node* newnode= new node(data);
    head= newnode;
    tail= newnode;
    return;
  }

  node* newnode= new node(data);
  newnode->next=head;
  head=newnode;
}

void insertAtEnd(node* &head, node* &tail, int data){
  if(head==NULL){
    node* newnode= new node(data);
    head=newnode;
    tail=newnode;
    return;
  }

  node* newnode= new node(data);
  tail->next= newnode;
  tail=newnode;
}

void print(node* &head){
  node* temp= head;
  while(temp!=NULL){
    cout<<temp->data<<" ";
    temp=temp->next;
  }
}

int main(){
  node* head= NULL;
  node* tail= NULL;
  insertAtBeg(head, tail, 100);
  insertAtBeg(head, tail, 200);
  insertAtEnd(head, tail, 900);
  insertAtEnd(head, tail, 520);
  print(head);
}
