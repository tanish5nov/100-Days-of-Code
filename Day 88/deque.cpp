#include<iostream>
#include<deque>
using namespace std;

int main(){
  deque<int>dq;

  dq.push_back(5);
  dq.push_front(6);
  cout<<dq.front()<<endl;
  cout<<dq.size()<<endl;
  dq.pop_front();
  dq.pop_back();
  cout<<dq.size()<<endl;
}
