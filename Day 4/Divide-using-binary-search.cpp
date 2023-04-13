#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int solve(int dividend,int divisor){
  int s=0;
  int e=dividend-1;
  int mid=s+((e-s)/2);

  while(s<=e){
    if(mid*divisor==dividend){
      return mid;
    }
    if(mid*divisor<dividend){
      s=mid+1;
    }
    else{e=mid-1;}
    mid=s+((e-s)/2);
  }
}

int main() {
  int divisor=3;
  int dividend=101;
  int ans= solve(dividend,divisor);
  cout<<ans;
}
