#include <iostream>
using namespace std;

void rev(string &s, int i, int j){
  if(i>j){
    return;
  }

  swap(s[i],s[j]);
  i++;
  j--;

  rev(s,i,j);
}

int main() {
  string s="tanish";
  int i=0;
  int j=s.length()-1;
  rev(s,i,j);
  cout<<s;
}
