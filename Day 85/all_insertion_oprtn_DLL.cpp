#include <bits/stdc++.h>
using namespace std;

//create the node
class node{
  public:
  int data;
  node* next;
  node* prev;

  node(){
    this->data=0;
    this->next=NULL;
    this->prev=NULL;
  }

  node(int data){
    this->data=data;
    this->next=NULL;
    this->prev=NULL;
  }
};

//calculate length
int GetLength(node* &head){
  int len=0;
  node* temp = head;
  while(temp!=NULL){
    len+=1;
    temp = temp->next;
  }
  return len;
}

//inserting element in head
void insertAtHead(node* &head, node* &tail, int data){
  if(head == NULL){
    //empty LL
    node* newnode = new node(data);
    head = newnode;
    tail = newnode;
    return;
  }

  node* newnode = new node(data);
  newnode->next = head;
  head->prev = newnode;
  head = newnode;
  return;
}

//inseting element at end
void insertAtEnd(node* &head, node* &tail, int data){
  if(head == NULL){
    //empty LL
    node* newnode = new node(data);
    head = newnode;
    tail = newnode;
    return;
  }

  node* newnode = new node(data);
  tail->next = newnode;
  newnode->prev = tail;
  tail = newnode;
  return;
}

//insert at a position
void insertAtPos(node* &head, node* &tail, int data, int pos){
  if(head == NULL){
    //empty LL
    node* newnode = new node(data);
    head = newnode;
    tail = newnode;
    return;
  }

  //start
  if(pos==1){insertAtHead(head, tail, data); return;}
  //end
  if(pos>GetLength(head)){insertAtEnd(head,tail,data); return;}

  //middle
  int i=1;
  node* prevNode = head;
  while(i<pos-1){
    prevNode = prevNode->next;
    i++;
  }

  node* nextNode = prevNode->next;
  node* newnode = new node(data);
  prevNode->next= newnode;
  newnode->prev = prevNode;
  nextNode->prev= newnode;
  newnode->next=nextNode;
  return;
}

//printing the list
void print(node* head){
  node* temp = head;

  while(temp!=NULL){
    cout<<temp->data<<" ";
    temp=temp->next;
  }
  cout<<endl;
  return;
}

int main() {
  node* head = new node(10);
  node* second = new node(20);
  node* third = new node(30);
  node* fourth = new node(40);
  node* tail = fourth;

  head->next = second;
  second->prev = head;

  second->next = third;
  third->prev = second;

  third->next = fourth;
  fourth->prev = third;

  print(head);
  insertAtHead(head, tail, 90);
  print(head);
  insertAtEnd(head, tail, 100);
  print(head);
  insertAtPos(head, tail, 200,9);
  print(head);
  return 0;
}
