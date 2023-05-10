#include <iostream>
using namespace std;

void solve(string s, char k, int i, int& ans){
  //base case
  if(i>=s.size()){return;}

  //precedure
  if(s[i]==k){ans=i;}

  //recursive call
  solve(s,k,i+1,ans);
}

int main() {
  string s;
  cin>>s;
  char k;
  cin>>k;
  int ans={-1};
  solve(s,k,0,ans);
  cout<<ans;
  return 0;
}
