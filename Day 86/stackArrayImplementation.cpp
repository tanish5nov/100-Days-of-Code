#include <iostream>
using namespace std;

class stack{
  public:
  int *arr;
  int top;
  int size;

  stack(int size){
    arr = new int[size];
    this->size = size;
    top = -1;
  }

  void push(int data){
    if(size-top>1){
      arr[++top]=data;
      return;
    }
    else{
      cout<<"Stack OverFlow"<<endl;
    }
  }

  void pop(){
    if(top==-1){cout<<"Underflow"<<endl;}
    else{
      top--;
    }
  }

  int getTop(){
    if(top==-1){cout<<"Empty stack"<<endl;return 0;}
    else{
      return arr[top];
    }
  }

  int getSize(){
    return top+1;
  }

  bool isEmpty(){
    if(top==-1){return true;}
    else{return false;}
  }
};

int main() {
  stack s(4);
  s.push(10);
  s.push(20);
  s.push(30);
  s.push(40);
  s.pop();
  while(!s.isEmpty()){
    cout<<s.getTop()<<endl;
    s.pop();
  }
}
