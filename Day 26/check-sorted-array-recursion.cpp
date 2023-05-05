#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool checkSorted(vector<int>&v, int& n, int i){
  if(i==(n-1)){return true;}
  if(v[i+1]<v[i]){return false;}

  return checkSorted(v,n,i+1);
}

int main() {
  vector<int>v{10,60,30,40,50};
  int n= v.size();
  int i=0;
  bool isSorted= checkSorted(v,n,i);

  if(isSorted){cout<<"Array is Sorted"<<endl;}
  else{cout<<"Array is not Sorted"<<endl;}

  return 0;
}
