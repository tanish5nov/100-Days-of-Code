#include <bits/stdc++.h>
using namespace std;

class node{
  public:
  int data;
  node* left;
  node* right;

  node(int data){
    this->data = data;
    this->left = NULL;
    this->right = NULL;
  }
};

node* buildtree(){
  //data input
  int data;
  cout<<"Enter Data: "<<endl;
  cin>>data;
  //base case
  if(data== -1){return NULL;}

  //step a create a root node
  node* root = new node(data);
  cout<<"Enter Data for left of "<<data<<" node "<<endl;
  //step b create left part
  root->left = buildtree();
  cout<<"Enter Data for right of "<<data<<" node "<<endl;
  //step c create right part
  root->right = buildtree();

  //return statement
  return root;
}

int main() {
  node* root = buildtree();
  return 0;
}
