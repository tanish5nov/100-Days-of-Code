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

int findLength(node* head){
  int i=0;
  node* temp = head;
  while(temp!=NULL){
    temp=temp->next;
    i++;
  }
  return i;
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

void insertAtPos(int position, node* &head, node* &tail, int data){
  //core condition
  if(head==NULL){
    node* newnode = new node(data);
    head= newnode;
    tail= newnode;
  }

  //agr insertion at beg h toh
  if(position==0){
    insertAtBeg(head,tail,data);
    return;
  }

  //agar insertion at end h toh
  int length= findLength(head);
  if(position==length){insertAtEnd(head,tail,data);return;}

  //finding position
  int i=1;
  node* prev= head;
  while(i<position){
    prev=prev->next;
    i++;
  }
  //core procedure
  node* newnode = new node(data);
  node* curr= prev->next;

  newnode->next= curr;
  prev->next= newnode;
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
  insertAtPos(4,head,tail,600);
  cout<<endl;
  print(head);
}
