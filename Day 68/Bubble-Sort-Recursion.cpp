#include <iostream>
using namespace std;

void sortArray(int *a, int n){
  if(n==0 || n==1){
    return;
  }
  for(int i=0; i<n-1; i++){
    if(a[i]>a[i+1]){swap(a[i],a[i+1]);}
  }

  sortArray(a, n-1);
}

int main() {
  int a[5]={2,5,1,6,9};
  sortArray(a,5);
  for(int i=0; i<5; i++){
    cout<<a[i]<<endl;
  }
}
