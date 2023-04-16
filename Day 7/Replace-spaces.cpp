#include <iostream>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;

int main() {
  char ch[100];
  cin.getline(ch,100);
  int i=0;
  int j= strlen(ch)-1;

  while(i<=j){
    if(ch[i]==' '){
      ch[i]='@';
    }
    i++;
  }
  cout<<ch;
  return 0;
}
