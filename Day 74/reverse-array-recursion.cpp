#include <bits/stdc++.h>
using namespace std;
void rev(int arr[], int i, int j){
  if(i>j){
    return;
  }
  swap(arr[i],arr[j]);
  rev(arr,++i,--j);
}
int main() {
  int arr[5]={1,2,3,4,5};
  rev(arr,0,4);
  for(int i=0; i<5; i++){
    cout<<arr[i]<<" ";
  }
  return 0;
}
