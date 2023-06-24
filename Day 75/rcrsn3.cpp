#include <bits/stdc++.h>
using namespace std;

void subSeq(int index, vector<int>& vect, int arr[], int n){
  //base case
  if(index>=n){
    for(auto it: vect){
      cout<<it<<" ";
    }
    if(vect.size()==0){cout<<"{}"<<" ";}
    cout<<endl;
    return;}
  
  //take
  vect.push_back(arr[index]);
  subSeq(index+1,vect,arr,n);

  //not take
  vect.pop_back();
  subSeq(index+1,vect,arr,n);
}

int main() {
  int arr[3]={3,1,2};
  vector<int>vect;
  subSeq(0, vect, arr, 3);
  return 0;
}
