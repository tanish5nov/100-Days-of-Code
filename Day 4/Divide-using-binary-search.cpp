#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int solve(int dividend,int divisor){
  int s=0;
  int e=dividend-1;
  int mid=s+((e-s)/2);
  int ans=1;
  while(s<=e){
    if(mid*divisor==dividend){
      ans=mid;
    }
    if(mid*divisor<dividend){
      ans=mid;
      s=mid+1;
    }
    else{e=mid-1;}
    mid=s+((e-s)/2);
  }
  return ans;
}

int main() {
  int divisor=3;
  int dividend=100;
  int ans= solve(dividend,divisor);
  cout<<ans;
}
