#include <bits/stdc++.h>
using namespace std;

int main() {
  stack<int>s;
  s.push(10);
  s.push(30);
  s.push(40);
  cout<<"Previous size: "<<s.size()<<endl;
  cout<<s.top()<<endl;
  s.pop();
  cout<<"After pop size: "<<s.size()<<endl;

  if(s.empty()){
    cout<<"Empty stack"<<endl;
  }
  else{
    cout<<"Not empty"<<" "<<"size is: "<<s.size()<<endl;
  }
  return 0;
}
