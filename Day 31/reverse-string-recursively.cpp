#include <iostream>
using namespace std;

void solve(string& s, int st, int e){
  //base case
  if(st>=e){return;}

  //procedure
  swap(s[st],s[e]);

  //recursive call
  solve(s,st+1, e-1);
}

int main() {
  string s;
  cin>>s;
  char k;
  cin>>k;
  int st=0;
  int e=s.size()-1;
  solve(s,st,e);
  cout<<s;
  return 0;
}
