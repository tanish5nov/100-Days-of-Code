#include <bits/stdc++.h>
using namespace std;

void insertSorted(stack<int>&s, int target){
  //agr stack khaali hai
  if(s.empty()){s.push(target);return;}
  //agar top element target se chota h ya equal h
  if(s.top()<=target){s.push(target);return;}

  //procedure
  int temp = s.top();
  s.pop();
  insertSorted(s,target);
  //bt
  s.push(temp);
}

int main() {
  stack<int>s;
  s.push(2);
  s.push(4);
  s.push(6);
  s.push(8);
  insertSorted(s,1);
  while(!s.empty()){
    cout<<s.top()<<" ";
    s.pop();
  }
  return 0;
}
