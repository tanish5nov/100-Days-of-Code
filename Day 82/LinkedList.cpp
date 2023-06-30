#include <bits/stdc++.h>
using namespace std;

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

int main() {
  //creating more nodes
  node* first= new node(10);
  node* second= new node(20);
  node* third= new node(30);
  node* fourth= new node(40);
  node* fifth= new node(50);

  //linking nodes
  first->next=second;
  second->next=third;
  third->next=fourth;
  fourth->next=fifth;
  fifth->next=NULL;
  node* head=first;

  while(head!=NULL){
    cout<<head->data<<" ";
    head=head->next;
  }
}
