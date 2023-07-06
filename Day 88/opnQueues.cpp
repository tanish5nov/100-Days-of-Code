#include <bits/stdc++.h>
using namespace std;

int main() {
  queue<int>q;
  q.push(10);
  q.push(20);
  q.push(30);
  q.push(40);
  q.push(50);
  cout<<"Size of Q is: "<<q.size()<<endl;
  q.pop();
  cout<<"Size of Q is: "<<q.size()<<endl;

  cout<<"Front Element: "<<q.front()<<endl;
  cout<<"Rear Element: "<<q.back()<<endl;
  
  q.empty()?cout<<"Empty Queue"<<endl:cout<<"Not Empty"<<endl;
  return 0;
}
