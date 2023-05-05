#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool checkSorted(vector<int>&v, int& n, int i){
  if(i==(n-1)){return true;}
  if(v[i+1]<v[i]){return false;}

  return checkSorted(v,n,i+1);
}

bool bsr(vector<int>&v, int n, int s, int e, int k){
  if(s>e){return false;}
  int mid=s+(e-s)/2;

  if(v[mid]==k){return true;}
  else if(v[mid]>k){bsr(v,n,s,mid-1,k);}
  else{bsr(v,n,mid+1,e,k);}
}

int main() {
  vector<int>v{10,20,30,40,60};
  int n= v.size();
  int i=0;
  bool isSorted= checkSorted(v,n,i);

  /*if(isSorted){cout<<"Array is Sorted"<<endl;}
  else{cout<<"Array is not Sorted"<<endl;}*/
  int s=0;
  int e=n-1;
  int k=60;
  if(bsr(v,n,s,e,k)){cout<<"Found";}
  else{cout<<"Not found";}

  return 0;
}
