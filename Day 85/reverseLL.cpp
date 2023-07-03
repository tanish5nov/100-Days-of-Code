#include <iostream>
using namespace std;
//circular singly linked list
class node{
  public:
  int data;
  node* next;

  node(){
    this->data=0;
    this->next=NULL;
  }

  node(int data){
    this->data=data;
    this->next=NULL;
  }
};

void print(node* head){
  node* temp = head;

  while(temp!=NULL){
    cout<<temp->data<<" ";
    temp=temp->next;
  }
  cout<<endl;
  return;
}

node* revLL(node* prevN, node* curr){
  //base case
  if(curr == NULL){return prevN;}
  node* nextNode = curr->next;
  curr->next = prevN;
  prevN=curr;
  curr=nextNode;
  revLL(prevN,curr);
}

int main() {
  //before reverse
  node* head = new node(10);
  node* second = new node(20);
  node* third = new node(30);
  node* fourth = new node(40);
  head->next = second;
  second->next=third;
  third->next=fourth;
  print(head);

  //after reverse
  node* prevN = NULL;
  node* curr = head;
  head=revLL(prevN,curr);
  print(head);
  return 0;
}
